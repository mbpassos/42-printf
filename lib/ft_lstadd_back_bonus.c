/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrito-p <mbrito-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/14 18:25:54 by mbrito-p          #+#    #+#             */
/*   Updated: 2023/05/14 18:25:54 by mbrito-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Adds the node ’new’ at the end of the list.
// lst: The address of a pointer to the first link of
// a list.
// new: The address of a pointer to the node to be
// added to the list.
//if (!*lst) checks if its empty.
#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*temp;

	if (!lst || !new)
		return ;
	if (!*lst)
	{
		*lst = new;
		return ;
	}
	temp = ft_lstlast(*lst);
	temp->next = new;
}

// int	main(void)
// {
// 	t_list *list = NULL;
// 	t_list *new_node;
//     t_list *last;
// 	// Create the first node of the list
// 	list = ft_lstnew("Node 1");
// 	// Add a new node to the front of the list
// 	new_node = ft_lstnew("Node 2");
// 	ft_lstadd_front(&list, new_node);
// 	// Add another node to the front of the list
// 	new_node = ft_lstnew("Node 3");
// 	ft_lstadd_front(&list, new_node);
//     // Create node and add to the end of the list
// 	last = ft_lstnew("Node 4");
//     ft_lstadd_back(&list, last);
//     while (list)
// 	{
// 		printf("%s\n", (char *)list->content);
// 		list = list->next;
// 	}
// 	return (0);
// }
