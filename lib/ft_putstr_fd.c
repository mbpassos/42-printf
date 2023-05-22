/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrito-p <mbrito-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/14 23:09:28 by mbrito-p          #+#    #+#             */
/*   Updated: 2023/05/14 23:09:28 by mbrito-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Outputs the string ’s’ to the given file
// descriptor.
#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	if (!s)
		return ;
	write (fd, s, ft_strlen(s));
}

// int main(void)
// {
//     char *str = "Hello, world!";
//     int fd = 1; 
//     ft_putstr_fd(str, fd);
//     return 0;
// }
