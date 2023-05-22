/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrito-p <mbrito-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 19:14:59 by mbrito-p          #+#    #+#             */
/*   Updated: 2023/05/11 19:14:59 by mbrito-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <string.h>
// It fills a block of memory (specified by the pointer s and the size n) 
// with a constant byte value (c).
#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*ptr;

	ptr = (unsigned char *)s;
	while (n-- > 0)
	{
		*(ptr++) = (unsigned char)c;
	}
	return (s);
}

// int	main(void)
// {
// 	char str[]="Lila";	
// 	printf("Before the function:%s", str);
//  //converts integer to unsigned char  
// 	ft_memset(str, 106, 2);
// 	printf("After the function:%s", str);
// 	return (0);
// }
