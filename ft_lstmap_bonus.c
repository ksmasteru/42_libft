/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hes-saqu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 18:52:32 by hes-saqu          #+#    #+#             */
/*   Updated: 2023/11/24 19:08:38 by hes-saqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static t_list	*ft_lstmap_helper(t_list *lst, void *(*f)(void *),
		void (*del)(void *), t_list *prev, t_list *new_head)
{
	t_list	*new_node;

	new_node = NULL;
	while (lst)
	{
		new_node = ft_lstnew(f(lst->content));
		if (!new_node)
		{
			ft_lstclear(&new_head, del);
			return (NULL);
		}
		if (prev)
		{
			prev->next = new_node;
			prev = new_node;
		}
		if (!prev)
		{
			new_head = new_node;
			prev = new_node;
		}
		lst = lst->next;
	}
	return (new_head);
}

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*prev;
	t_list	*new_head;

	new_head = NULL;
	prev = NULL;
	if (!lst || !f || !del)
		return (NULL);
	return (ft_lstmap_helper(lst, f, del, prev, new_head));
}
