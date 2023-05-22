/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrito-p <mbrito-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 20:27:43 by mbrito-p          #+#    #+#             */
/*   Updated: 2023/05/11 20:27:43 by mbrito-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <string.h>
//The  memcpy()  function copies n bytes from memory area src to memory 
//area dest. The memory areas must not overlap. Use memmove(3) if the memory 
// areas do overlap. Declare two char pointers to keep track of the 
// destination.
// By declaring src as a const char*, the function is indicating that the 
// memory pointed to by the src pointer is read-only and that any attempt to 
// modify it will result in a compiler error.
// On the other hand, the dest pointer is not declared as const because 
// it will be modified by the function and the data in the memory location 
// pointed to by dest will be overwritten by the data from src
// and source memory locations
// Return the destination pointer
#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char		*pdest;
	const char	*psrc;

	if (src == NULL && dest == NULL)
		return (NULL);
	pdest = dest;
	psrc = src;
	while (n-- > 0)
	{
		*(pdest++) = *(psrc++);
	}
	return (dest);
}

// int	main(void)
// {
// 	char	src[] = "Hello, world!";
// 	char	dest[20];
// 	size_t	n = strlen(src) + 1;
// 	// Use the ft_memcpy function to copy n bytes from the src buffer 
// 	// to the dest buffer
// 	ft_memcpy(dest, src, n);
// 	// Print the contents of the dest buffer to verify that the 
// 	// copy was successful
// 	printf("src: %s\n", src);
// 	printf("dest: %s\n", dest);
// 	return (0);
// }
