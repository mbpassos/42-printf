/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrito-p <mbrito-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/14 22:38:11 by mbrito-p          #+#    #+#             */
/*   Updated: 2023/05/14 22:38:11 by mbrito-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <string.h>
// compares the first n bytes (each interpreted as unsigned char) 
// of the memory areas s1 and s2.
// returns an integer less than, equal to, or greater than zero if 
// the first n bytes of s1 is found, respectively, to be less than, 
// to match, or be greater than the first n bytes of s2
#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*ptr_s1;
	const unsigned char	*ptr_s2;

	ptr_s1 = s1;
	ptr_s2 = s2;
	while (n--)
	{
		if (*ptr_s1 != *ptr_s2)
			return (*ptr_s1 - *ptr_s2);
		ptr_s1++;
		ptr_s2++;
	}
	return (0);
}

// int main(void)
// {
//     char str1[] = "Hello, world!";
//     char str2[] = "Hello, friends!";
//     int result;    
//     result = ft_memcmp(str1, str2, strlen(str1));
//     printf("ft_memcmp: %d\n", result);
//     printf("memcmp: %d\n", memcmp(str1, str2, strlen(str1)));
// }
