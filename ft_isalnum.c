/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arupert <arupert@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 18:56:36 by arupert           #+#    #+#             */
/*   Updated: 2021/11/23 18:49:00 by arupert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if (((c >= 65) && (c <= 90)) || \
	((c >= 97) && (c <= 122)) || \
	((c >= 48) && (c <= 57)))
		return (1);
	return (0);
}
