/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arupert <arupert@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 17:32:20 by arupert           #+#    #+#             */
/*   Updated: 2021/11/24 19:19:26 by arupert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	check_space(const char *str)
{
	int	i;

	i = 0;
	while (str[i] == ' ' || \
			str[i] == '\t' || \
			str[i] == '\n' || \
			str[i] == '\r' || \
			str[i] == '\f' || \
			str[i] == '\v')
		i++;
	return (i);
}

int	ft_atoi(const char *nptr)
{
	int			i;
	int			n;
	long int	x;

	i = check_space(nptr);
	n = 1;
	if (*(nptr + i) == '-' || *(nptr + i) == '+')
	{
		if (*(nptr + i) == '-')
			n = -1;
		i++;
	}
	x = 0;
	while (*(nptr + i) >= '0' && *(nptr + i) <= '9')
	{
		x = x * 10 + *(nptr + i) - 48;
		if (x > 2147483647 && n == 1)
			return (-1);
		if (x > 2147483648 && n == -1)
			return (0);
		i++;
	}
	x = x * n;
	return ((int)x);
}
