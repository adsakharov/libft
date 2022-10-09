/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arupert <arupert@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 18:34:07 by arupert           #+#    #+#             */
/*   Updated: 2021/11/23 18:34:08 by arupert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*s;
	size_t	j;
	size_t	i;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	s = malloc(sizeof(char) * (ft_strlen(s1) + (ft_strlen(s2) + 1)));
	if (s == NULL)
		return (NULL);
	i = 0;
	while (*(s1 + i) != '\0')
	{
		*(s + i) = *(s1 + i);
		i++;
	}
	j = 0;
	while (*(s2 + j) != '\0')
	{
		*(s + i + j) = *(s2 + j);
		j++;
	}
	*(s + i + j) = '\0';
	return (s);
}
