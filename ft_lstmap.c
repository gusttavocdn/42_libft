/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gusda-si <gusda-si@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/14 11:36:33 by gusda-si          #+#    #+#             */
/*   Updated: 2023/07/14 12:35:03 by gusda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_lst;
	t_list	*old_lst;

	(void)del;
	old_lst = lst;
	new_lst = ft_lstnew(f(old_lst->content));
	old_lst = old_lst->next;
	while (old_lst)
	{
		ft_lstadd_back(&new_lst, ft_lstnew(f(old_lst->content)));
		old_lst = old_lst->next;
	}
	return (new_lst);
}
