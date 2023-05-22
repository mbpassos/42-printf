/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrito-p <mbrito-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/14 23:09:15 by mbrito-p          #+#    #+#             */
/*   Updated: 2023/05/14 23:09:15 by mbrito-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Outputs the string ’s’ to the given file descriptor
// followed by a newline.
#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	size_t	len;

	len = ft_strlen(s);
	write(fd, s, len);
	write(fd, "\n", 1);
}

// int	main(void)
// {
//     char *str = "Hello, world!";
//     ft_putendl_fd(str, 1);
//     return (0);
// }