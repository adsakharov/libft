/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arupert <arupert@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 18:03:52 by arupert           #+#    #+#             */
/*   Updated: 2021/11/24 22:43:30 by arupert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static long int	check_minus(int n, int fd)
{
	long int	x;

	if (n < 0)
	{
		write(fd, "-", 1);
		x = -1 * (long int)(n);
	}
	else
		x = n;
	return (x);
}

void	ft_putnbr_fd(int n, int fd)
{
	int			arr[10];
	int			i;
	long int	x;
	char		c;

	x = check_minus(n, fd);
	i = 10;
	while (i > 0)
	{
		arr[i - 1] = x % 10;
		i--;
		x = x / 10;
	}
	while (arr[i] == 0 && i < 9)
		i++;
	while (i <= 9)
	{
		c = 48 + arr[i];
		write(fd, &c, 1);
		i++;
	}
	return ;
}
