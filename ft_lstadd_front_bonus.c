/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecakdemi <ecakdemi@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 18:14:09 by ecakdemi          #+#    #+#             */
/*   Updated: 2024/10/16 18:41:41 by ecakdemi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **head, t_list *new)
{
	new->next = *head;
	*head = new;
}

/*
#include <stdio.h>
int main()
{
	t_list *node1 = ft_lstnew("adem");
	t_list *node2 = ft_lstnew("ece");
	t_list *node3 = ft_lstnew("ak");
	t_list *node4 = ft_lstnew("ec");
	t_list **head = &node2;
	
	node2->next = node3;
	node3->next = node4;
	
	ft_lstadd_front(head, node1);

	while (node1)
	{
		printf("%s", node1->content);
		node1 = node1->next;
	}
}*/