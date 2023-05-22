/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrito-p <mbrito-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 01:40:08 by mbrito-p          #+#    #+#             */
/*   Updated: 2023/05/15 01:40:08 by mbrito-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// The strdup function in C library is used to duplicate a string, 
// which means it allocates memory for a new string and copies the 
// contents of the original string into the new memory. 

#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	full_size;
	char	*s_cpy;

	full_size = ft_strlen(s) + 1;
	s_cpy = malloc(full_size);
	if (s_cpy == NULL)
		return (0);
	ft_memcpy(s_cpy, s, full_size);
	return (s_cpy);
}

// int main() {
//     char *str = "Hello, world!";
//     char *str_copy1 = strdup(str);
//     char *str_copy2 = ft_strdup(str);    
//     printf("Original string: %s\n", str);
//     printf("strdup result: %s\n", str_copy1);
//     printf("ft_strdup result: %s\n", str_copy2);    
//     free(str_copy1);
//     free(str_copy2);
//     return 0;
// }
