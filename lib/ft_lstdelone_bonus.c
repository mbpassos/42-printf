/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrito-p <mbrito-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/14 18:44:34 by mbrito-p          #+#    #+#             */
/*   Updated: 2023/05/14 18:44:34 by mbrito-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Takes as a parameter a node and frees the memory of
// the node’s content using the function ’del’ given
// as a parameter and free the node. The memory of
// ’next’ must not be freed.
// lst: The node to free.
// del: The address of the function used to delete
// the content.
// at the end set lst = NULL to prevent dangling 
// (invalid or non-existent) pointer.
// lst = NULL; prevent from using the pointer
#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (lst && del)
	{
		del(lst->content);
		free(lst);
		lst = NULL;
	}
}

// void delete_string(void *str)
// {
//     free(str);
// }
// int main(void)
// {
//     // Create a new node with a string "hello"
//     t_list *node = ft_lstnew(strdup("hello"));
//     // Call ft_lstdelone to delete the node
//     ft_lstdelone(node, delete_string);
//     // Print a message to indicate successful execution
//     printf("Program completed successfully.\n");
//     return 0;
// }
