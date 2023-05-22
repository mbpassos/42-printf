/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrito-p <mbrito-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/14 23:07:28 by mbrito-p          #+#    #+#             */
/*   Updated: 2023/05/14 23:07:28 by mbrito-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// The fputc() function writes the character c (converted to an ``unsigned
// char'') to the output stream pointed to by stream.
// 42 PDF] Outputs the character ’c’ to the given file descriptor.
#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

// #include <fcntl.h> 
// int main(void)
// {
//     int fd = open("output.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);
//     if (fd == -1)
//     {
//         ft_putstr_fd("Error opening file!\n", STDERR_FILENO);
//         return 1;
//     }
//     ft_putchar_fd('H', fd);
//     ft_putchar_fd('e', fd);
//     ft_putchar_fd('l', fd);
//     ft_putchar_fd('l', fd);
//     ft_putchar_fd('o', fd);
//     ft_putchar_fd('\n', fd);
//     close(fd);
//     return 0;
// }