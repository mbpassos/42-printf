/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrito-p <mbrito-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/14 19:29:57 by mbrito-p          #+#    #+#             */
/*   Updated: 2023/05/14 19:29:57 by mbrito-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Iterates the list ’lst’ and applies the function ’f’ on the content 
// of each node. Creates a new list resulting of the successive 
// applications of the function ’f’. The ’del’ function is used to
// delete the content of a node if needed.
// lst: The address of a pointer to a node.
// f: The address of the function 
// del: The address of the function used to delete
// the content of a node if needed.
// Returns: The new list. NULL if the allocation fails.
// ft_lstclear(&new_node, del); prevents memory leaks
#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_lst;
	t_list	*new_node;

	if (!lst || !f)
		return (NULL);
	new_lst = NULL;
	new_node = NULL;
	while (lst)
	{
		new_node = ft_lstnew(f(lst->content));
		if (!new_node)
		{
			ft_lstclear(&new_node, del);
			return (NULL);
		}
		ft_lstadd_back(&new_lst, new_node);
		lst = lst->next;
	}
	return (new_lst);
}

// //Function to square an integer:
// void *square(void *n)
// {
//     int *result = malloc(sizeof(int)); 
//     if (!result) // Check if memory allocation failed
//         return NULL; // Return NULL if it did
//     *result = (*(int *)n) * (*(int *)n); 
//     return result; // Return a void pointer to the squared integer
// }
// // Function to free an integer:
// void delete_int(void *n)
// {
//     free(n); // Free the memory allocated for the integer value
// }
// int main(void)
// {
//     // Create a list of integers:
//     t_list *lst = ft_lstnew(malloc(sizeof(int))); 
//     if (!lst) // Check if memory allocation failed
//         return 0; // Exit the program with a failure code if it did
//     *(int *)lst->content = 1; 
//     ft_lstadd_back(&lst, ft_lstnew(malloc(sizeof(int)))); 
//     *(int *)lst->next->content = 2; 
//     ft_lstadd_back(&lst, ft_lstnew(malloc(sizeof(int)))); 
//     *(int *)lst->next->next->content = 3; 
//     // Use ft_lstmap to create a new list of squared integers:
//     t_list *squared_lst = ft_lstmap(lst, square, delete_int); 
//     if (!squared_lst) // Check if memory allocation failed
//         return 0; // Exit the program with a failure code if it did
//     // Print the squared integers:
//     t_list *node = squared_lst; 
//     while (node) 
//     {
//         printf("%d\n", *(int *)node->content); 
//         node = node->next; 
//     }
//     // Clean up memory:
//     ft_lstclear(&lst, free); 
//     ft_lstclear(&squared_lst, free); 
//     return 0; 
// }
