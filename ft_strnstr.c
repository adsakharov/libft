/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arupert <arupert@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 18:35:50 by arupert           #+#    #+#             */
/*   Updated: 2021/11/24 22:20:50 by arupert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	l_leng;

	if (*little == '\0')
		return ((char *)big);
	if (len == 0)
		return (NULL);
	l_leng = ft_strlen(little);
	i = 0;
	while (*(big + i) != '\0' && i <= len - l_leng)
	{
		j = 0;
		while (*(big + i + j) == *(little + j) && *(little + j) != '\0')
			j++;
		if (j == l_leng)
			return ((char *)(big + i));
		i++;
	}
	return (NULL);
}
