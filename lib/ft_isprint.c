/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrito-p <mbrito-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 23:37:39 by mbrito-p          #+#    #+#             */
/*   Updated: 2023/05/10 23:37:39 by mbrito-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// The code provided is a C function called "ft_isprint", which checks whether 
// a given character is a printable ASCII character or not. The function takes 
// an integer argument "c" which represents the ASCII code of the character 
// to be checked, and returns an integer value of either 1 or 0 
// depending on whether the character is printable or not.
#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}

// int	main(void)
// {
// 	    printf("teste isprint:%d\n", ft_isprint(30));
// 	    printf("teste isprint:%d\n", ft_isprint(48));
// }
