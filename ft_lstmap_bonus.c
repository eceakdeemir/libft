/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecakdemi <ecakdemi@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 13:31:01 by ecakdemi          #+#    #+#             */
/*   Updated: 2024/10/19 13:50:11 by ecakdemi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_node;
	t_list	*list;

	list = NULL;
	while (lst)
	{
		new_node = ft_lstnew(f(lst->content));
		if (new_node)
			ft_lstadd_back(&list, new_node);
		else
			ft_lstclear(&list, del);
	}
	return (list);
}
