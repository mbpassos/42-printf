/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrito-p <mbrito-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/14 18:06:39 by mbrito-p          #+#    #+#             */
/*   Updated: 2023/05/14 18:06:39 by mbrito-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Counts the number of nodes in a list.
// Parameter: lst: The beginning of the list.
// Return: The length of the list
#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	count;

	count = 0;
	while (lst)
	{
		count++;
		lst = lst->next;
	}
	return (count);
}

// int main(void)
// {
//     t_list *list;
//     t_list *new_node;
//     list = ft_lstnew("hey");
//     new_node = ft_lstnew("ho");
//     ft_lstadd_front(&list, new_node); 
//     printf("nodes da lista é %d:\n", ft_lstsize(list)); 
//     return (0); 
// }
