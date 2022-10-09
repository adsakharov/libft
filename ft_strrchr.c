/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arupert <arupert@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 18:35:58 by arupert           #+#    #+#             */
/*   Updated: 2021/11/24 21:56:43 by arupert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;
	size_t	goal;
	char	*str;

	i = 0;
	goal = 0;
	str = (char *)s;
	while (*(str + i) != '\0')
	{
		if (*(str + i) == (char)c)
			goal = i;
		i++;
	}
	if (c == 0)
		return (str + i);
	if (goal > 0)
		return (str + goal);
	else if (*str == (char)c)
		return (str);
	else
		return (0);
}
