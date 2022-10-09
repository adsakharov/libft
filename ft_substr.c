/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arupert <arupert@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 18:37:57 by arupert           #+#    #+#             */
/*   Updated: 2021/11/24 22:36:41 by arupert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	act_len;
	size_t	i;

	if (s == NULL)
		return (NULL);
	if ((size_t)start >= ft_strlen(s))
		len = 0;
	act_len = ft_strlen(s + start);
	if (act_len > len)
		act_len = len;
	str = malloc(sizeof(char) * (act_len + 1));
	if (str == NULL)
		return (NULL);
	i = 0;
	while (i < act_len)
	{
		*(str + i) = *(s + start + i);
		i++;
	}
	*(str + i) = '\0';
	return (str);
}
