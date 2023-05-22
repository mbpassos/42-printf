/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrito-p <mbrito-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 21:35:57 by mbrito-p          #+#    #+#             */
/*   Updated: 2023/05/11 21:35:57 by mbrito-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// The memmove() function copies n bytes from memory area 
// src to memory area dest. 
// The memory areas may overlap: copying takes place as though the bytes 
// in src are first copied into a temporary array that does not overlap src 
// or dest, and the bytes are then copied from the temporary array to dest.
// returns a pointer to dest.
// #include <string.h>
// https://42born2code.slack.com/archives/C048MP20S94/p1681845104728969     
#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	if (((unsigned char *)dest) == ((unsigned char *)src))
		return (dest);
	if (dest > src)
	{
		while (n > 0)
		{
			((unsigned char *)dest)[n - 1] = ((unsigned char *)src)[n - 1];
			n--;
		}
	}
	else
	{
		ft_memcpy (dest, src, n);
	}
	return (dest);
}

// int main()
// {
//     char str1[] = "abcdefghijhjkhjk";
//     char str2[] = "abcdefghij";
//     // Use standard library memmove to copy 5 bytes of str1 to str1+3
//     memmove(str1+3, str1, 10);
//     printf("str1 after memmove: %s\n", str1); // Output: abcabcdej
//     // Use ft_memmove to copy 5 bytes of str2 to str2+3
//     ft_memmove(str1+3, str1, 10);
//     printf("str2 after ft_memmove: %s\n", str2); // Output: abcabcdej
//     return 0;
// }
