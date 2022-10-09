/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arupert <arupert@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 13:46:35 by arupert           #+#    #+#             */
/*   Updated: 2022/03/08 14:03:21 by arupert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*tmp;
	t_list	*processed;

	if (!lst || !f || !del)
		return (NULL);
	processed = NULL;
	while (lst)
	{
		tmp = ft_lstnew(f(lst->content));
		if (!tmp)
		{
			ft_lstclear(&processed, del);
			return (NULL);
		}
		ft_lstadd_back(&processed, tmp);
		lst = lst->next;
	}
	return (processed);
}
