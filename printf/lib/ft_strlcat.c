/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrito-p <mbrito-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 22:56:37 by mbrito-p          #+#    #+#             */
/*   Updated: 2023/05/11 22:56:37 by mbrito-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// strlcat() is a function that concatenates two strings. 
// It takes the full size of the buffer as a parameter (not just the length) 
// and guarantees to NUL-terminate the result. 
// Parameters:
//   - dst: the destination string buffer to append to
//   - src: the source string to append to the destination string
//   - dstsize: the size of the destination buffer
// Return value: the total length of the original string and the 
// appended string that would have been created if enough 
// :space had been available.
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	len_src;
	size_t	len_dest;
	size_t	str_result;

	i = 0;
	str_result = 0;
	len_src = ft_strlen(src);
	len_dest = ft_strlen(dst);
	if (size > len_dest)
		str_result = len_src + len_dest;
	else
		return (len_src + size);
	while (src[i] && (len_dest + 1) < size)
	{
		dst[len_dest] = src[i];
		len_dest++;
		i++;
	}
	dst[len_dest] = '\0';
	return (str_result);
}
// int main(void)
// {
//     char str1[20] = "Hello, ";
//     char *str2 = "world!";
//     size_t dest_size = sizeof(str1);
//     size_t result = ft_strlcat(str1, str2, dest_size);
//     printf("Result: %zu, Destination string: %s\n", result, str1);
//     return 0;
// }
