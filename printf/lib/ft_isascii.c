/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrito-p <mbrito-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 23:09:56 by mbrito-p          #+#    #+#             */
/*   Updated: 2023/05/10 23:09:56 by mbrito-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// determines whether a given character is a valid ASCII character or not. 
// The function takes an integer argument "c" which represents the ASCII code 
// of the character to be checked, and returns an integer value of either 
// 1 or 0 depending on whether the character is an ASCII character or not.
// The range of valid ASCII characters is from 0 to 127 decimal 
// or 0x00 to 0x7F in hexadecimal.
#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}

// int	main(void)
// {
// 	printf("teste isascii:%d\n", ft_isascii(10));
// 	printf("teste isascii:%d\n", ft_isascii(128));
// 	printf("teste isascii:%d\n", ft_isascii(56));
// 	printf("teste isascii:%d\n", ft_isascii(140));
// }
