/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrito-p <mbrito-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 00:17:11 by mbrito-p          #+#    #+#             */
/*   Updated: 2023/05/12 00:17:11 by mbrito-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// library: <string.h>
// scans the initial n bytes of the memory area pointed to by s for the 
// first instance of c. Both c and the bytes of the memory area pointed to 
// by s are interpreted as unsigned char
// return a pointer to the matching byte or NULL if the character does not 
// occur in the given memory area.
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*ptr;

	ptr = s;
	while (n--)
	{
		if (*ptr == (unsigned char)c)
			return ((void *)ptr);
		ptr++;
	}
	return (NULL);
}

// int main()
// {
//     char str[] = "Hello, world!";
//     char *ptr1 = memchr(str, 'w', strlen(str));
//     char *ptr2 = ft_memchr(str, 'w', strlen(str));
//     if (ptr1 == ptr2)
//         printf("ft_memchr works as expected!\n");
//     else
//         printf("ft_memchr function is incorrect.\n");
//     return 0;
// }
