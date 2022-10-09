/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arupert <arupert@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 18:36:09 by arupert           #+#    #+#             */
/*   Updated: 2021/11/24 20:09:58 by arupert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	char	*str;

	if (s1 == NULL)
		return (NULL);
	i = 0;
	while (*(s1 + i) != '\0' && ft_strchr(set, *(s1 + i)))
		i++;
	j = ft_strlen(s1);
	while (j > i + 1 && ft_strchr(set, *(s1 + j - 1)))
		j--;
	str = malloc(sizeof(char) * (j - i + 1));
	if (str == NULL)
		return (NULL);
	*(str + j - i) = '\0';
	return ((char *)ft_memcpy(str, s1 + i, (j - i)));
}
