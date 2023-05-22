/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrito-p <mbrito-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 23:46:21 by mbrito-p          #+#    #+#             */
/*   Updated: 2023/05/10 23:46:21 by mbrito-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// needs the library #include <string.h>
// The strlen() function calculates the length of the string pointed to by s, 
// excluding the terminating null byte ('\0').
// uses size_t because it is an unsigned int that is specifically design to 
// storing sizes of objects
#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

// int	main(void)
// {
// 	printf("teste strlen:%lu\n", ft_strlen("abcde"));
// 	printf("teste strlen:%lu\n", strlen("abcde"));
// 	return (0);
// }
