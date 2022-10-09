/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arupert <arupert@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 18:00:21 by arupert           #+#    #+#             */
/*   Updated: 2021/11/23 18:00:24 by arupert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*d;
	char	*s;
	size_t	i;

	if ((n == 0) || (dest == src))
		return (dest);
	d = (char *)dest;
	s = (char *)src;
	if (d < s)
	{
		i = 0;
		while (i < n)
		{
			*(d + i) = *(s + i);
			i++;
		}
	}
	else
	{
		while (n--)
			*(d + n) = *(s + n);
	}
	return (dest);
}
