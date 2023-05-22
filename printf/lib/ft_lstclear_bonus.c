/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrito-p <mbrito-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/14 18:57:20 by mbrito-p          #+#    #+#             */
/*   Updated: 2023/05/14 18:57:20 by mbrito-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Deletes and frees the given node and every
// successor of that node, using the function ’del’
// and free(3).
// Finally, the pointer to the list must be set to NULL.
// lst: The address of a pointer to a node.
// del: The address of the function used to delete
// the content of the node.
// *lst = NULL to prevent dangling pointer;
#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*upcomming;
	t_list	*current;

	if (!lst || !*lst)
		return ;
	current = *lst;
	while (current)
	{
		upcomming = current->next;
		del(current->content);
		free(current);
		current = upcomming;
	}
	*lst = NULL;
}

// void putnbr(int num) {
//   printf("%d\n", num);
// }
// void	del(void *data)
// {
// 	free(data);
// }
// void putchat(char ch) {
//   printf("%c\n", ch);
// }
// int	main(void)
// {
// 	t_list	*lst;
// 	int		*data;
// 	lst = NULL;
// 	data = malloc(sizeof(int));
// 	*data = 42;
// 	lst = ft_lstnew(data);
// 	data = malloc(sizeof(int));
// 	*data = 13;
// 	ft_lstadd_front(&lst, ft_lstnew(data));
// 	data = malloc(sizeof(int));
// 	*data = 7;
// 	ft_lstadd_front(&lst, ft_lstnew(data));
// 	// Print the original list
// 	t_list *current = lst;
// 	while (current)
// 	{
// 		putnbr(*(int *)current->content);
// 		putchat(' ');
// 		current = current->next;
// 	}
// 	putchat('\n');
// 	// Clear the list
// 	ft_lstclear(&lst, del);
// 	// Print the cleared list
// 	current = lst;
// 	while (current)
// 	{
// 		putnbr(*(int *)current->content);
// 		putchat(' ');
// 		current = current->next;
// 	}
// 	putchat('\n');
// 	return (0);
// }
