/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arupert <arupert@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 18:34:16 by arupert           #+#    #+#             */
/*   Updated: 2021/11/24 14:24:45 by arupert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;

	i = 0;
	while (*(dst + i) != '\0' && i < size)
		i++;
	j = 0;
	while (*(src + j) != '\0' && size > (i + j + 1))
	{
		*(dst + i + j) = *(src + j);
		j++;
	}
	if (i + j < size)
		*(dst + i + j) = '\0';
	return (i + ft_strlen(src));
}
