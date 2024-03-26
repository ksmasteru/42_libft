/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hes-saqu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 13:48:19 by hes-saqu          #+#    #+#             */
/*   Updated: 2023/11/25 21:23:00 by hes-saqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*temp;
	t_list	*holder;

	holder = NULL;
	temp = *lst;
	if (!temp || !del)
		return ;
	while (temp)
	{
		holder = temp->next;
		ft_lstdelone(temp, del);
		temp = holder;
	}
	*lst = NULL;
}
