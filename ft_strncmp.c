/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arupert <arupert@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 18:35:42 by arupert           #+#    #+#             */
/*   Updated: 2021/11/24 22:09:48 by arupert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	unsigned char	*str1;
	unsigned char	*str2;

	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	if (n == 0)
		return (0);
	if (*str1 == '\0' || *str2 == '\0')
		return (*str1 - *str2);
	i = 0;
	while (n > i && (*(str1 + i) != '\0' && *(str2 + i) != '\0'))
	{
		if (*(str1 + i) == *(str2 + i))
			i++;
		else
			return (*(str1 + i) - *(str2 + i));
	}
	if (i == n)
		return (0);
	return (*(str1 + i) - *(str2 + i));
}
