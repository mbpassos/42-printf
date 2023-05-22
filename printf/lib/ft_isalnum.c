/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrito-p <mbrito-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 23:01:34 by mbrito-p          #+#    #+#             */
/*   Updated: 2023/05/10 23:01:34 by mbrito-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// isalnum - check whether a character is alphanumeric
// #include <ctype.h> This function returns a non-zero int if c 
// is alphanumeric and 0 if c is not alphanumeric.
#include "libft.h"

int	ft_isalnum(int c)
{
	if ((c >= 48 && c <= 57) || (c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	return (0);
}

// int	main(void)
// {
// 	printf("teste ft_isalnum:%d\n", ft_isalnum(14));
// 	printf("teste ft_isalnum:%d\n", ft_isalnum(67));
// 	printf("teste ft_isalnum:%d\n", ft_isalnum(97));
// 	printf("teste ft_isalnum:%d\n", ft_isalnum(49));
// }
