/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arupert <arupert@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 18:06:12 by arupert           #+#    #+#             */
/*   Updated: 2021/11/23 18:32:14 by arupert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_words(char const *s, char c)
{
	size_t	i;
	size_t	counter;

	i = 0;
	counter = 0;
	while (*(s + i) != '\0')
	{
		if (*(s + i) != c && (*(s + i + 1) == c || *(s + 1 + i) == '\0'))
			counter++;
		i++;
	}
	return (counter);
}

static char	**free_char_array(char **char_array, size_t size)
{
	size_t	j;

	j = 0;
	while (j <= size)
	{
		free(*(char_array + j));
		j++;
	}
	free(char_array);
	return (NULL);
}

static char	*create_word(char const *s, char c, size_t i)
{
	char	*word;
	size_t	len;
	size_t	k;

	len = 1;
	while (i != 0 && *(s + i - 1) != c)
	{
		i--;
		len++;
	}
	word = malloc(sizeof(char) * (len + 1));
	k = 0;
	while (k < len)
	{
		*(word + k) = *(s + i + k);
		k++;
	}
	*(word + k) = '\0';
	return (word);
}

char	**ft_split(char const *s, char c)
{
	char	**char_array;
	size_t	j;
	size_t	i;

	if (s == NULL)
		return (NULL);
	char_array = (char **)malloc(sizeof(char *) * (count_words(s, c) + 1));
	if (char_array == NULL)
		return (NULL);
	i = 0;
	j = 0;
	while (*(s + i) != '\0')
	{
		if (*(s + i) != c && (*(s + i + 1) == c || *(s + i + 1) == '\0'))
		{
			*(char_array + j) = create_word(s, c, i);
			if (*(char_array + j) == NULL)
				return (free_char_array(char_array, j));
			j++;
		}
		i++;
	}
	*(char_array + j) = NULL;
	return (char_array);
}
