/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrito-p <mbrito-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/14 17:45:37 by mbrito-p          #+#    #+#             */
/*   Updated: 2023/05/14 17:45:37 by mbrito-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Adds the node ’new’ at the beginning of the list
// lst: The address of a pointer to the first link of
// a list.
// new: The address of a pointer to the node to be
// added to the list.
#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	new->next = *lst;
	*lst = new;
}

// int	main(void)
// {
// 	t_list *list = NULL;
// 	t_list *new_node;
// 	// Create the first node of the list
// 	list = ft_lstnew("Node 1");
// 	// Add a new node to the front of the list
// 	new_node = ft_lstnew("Node 2");
// 	ft_lstadd_front(&list, new_node);
// 	// Add another node to the front of the list
// 	new_node = ft_lstnew("Node 3");
// 	ft_lstadd_front(&list, new_node);
// 	// Print the list after adding new nodes
// while (list)
// {
// 	printf("%s\n", (char *)list->content);
//      // fazer o list->next é necessário para que o loop siga iterando 
//      //nos proximos nodes da linked list. Sem fazer isso o loop 
//      //ficaria em ciclo infinito. Se for uma linked list com só um node, 
//      //por exemplo, ela só faz o print de um node e sai pq não existe 
//      // um next node. o ->next é especificamente criado em C 
//      // pra guardar o pointer to the next node of a linked list. 
//      // Quando um novo node é adicionado, o next do node anterior 
//      // atualiza pra apontar para o novo node o que cria 
//      // uma linkagem entre eles.
// 	list = list->next;
// }
// 	return (0);
// }
