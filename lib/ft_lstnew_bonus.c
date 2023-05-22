/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrito-p <mbrito-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/14 17:23:30 by mbrito-p          #+#    #+#             */
/*   Updated: 2023/05/14 17:23:30 by mbrito-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Allocates (with malloc(3)) and returns a new node.
// The member variable ’content’ is initialized with
// the value of the parameter ’content’. The variable
// ’next’ is initialized to NULL (indicating that 
// it is the last node in the linked list).
// Returns: new node;
#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new_node;

	new_node = (t_list *)malloc(sizeof(t_list));
	if (!new_node)
		return (NULL);
	new_node->content = content;
	new_node->next = NULL;
	return (new_node);
}

// int main(void)
// {     
//     int data = 42;
//     t_list *node = ft_lstnew(&data);
//     if (node == NULL)
//     {
//         printf("Error: Failed to create new node\n");
//         return EXIT_FAILURE;
//          // used to indicate that a program has exited 
//          // abnormally or unsuccessfully.
//     }    
//     printf("New node - value %d\n", *(int *)node->content);
//     //*(int *)node->content) faz typecasting 
//     //pq content na struct é void     
//     free(node);
//     return EXIT_SUCCESS;
// }
