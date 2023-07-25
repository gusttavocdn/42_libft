/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gusda-si <gusda-si@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 18:56:12 by gusda-si          #+#    #+#             */
/*   Updated: 2023/07/25 15:49:46 by gusda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*current_node;

	if (!lst || !del)
		return ;
	current_node = *lst;
	while (*lst != NULL)
	{
		current_node = *lst;
		*lst = (*lst)->next;
		ft_lstdelone(current_node, del);
	}
}
