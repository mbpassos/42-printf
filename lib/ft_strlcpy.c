/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrito-p <mbrito-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 22:27:17 by mbrito-p          #+#    #+#             */
/*   Updated: 2023/05/11 22:27:17 by mbrito-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* The ft_strlcpy function copies up to dst size - 1 (we remove 1 because 
 * of the null-terminator)characters from the string src to dst,
 * NUL-terminating the result if size is not 0.
 * It ensures that the resulting string will always be NUL-terminated.
 * The size of the source string is returned.
 * Return the size of the source string
 */
#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (size > 0)
	{
		while (src[i] && i < size - 1)
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (ft_strlen(src));
}
// int		main(void)
// {
// 	char	src[] = "Hello, world!";
// 	char	dst[15];	
// 	printf("ft_strlcpy: %lu\n", ft_strlcpy(dst, src, 5));
// 	return (0);
// }
