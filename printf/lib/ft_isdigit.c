/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrito-p <mbrito-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 21:49:39 by mbrito-p          #+#    #+#             */
/*   Updated: 2023/05/10 21:49:39 by mbrito-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Checks if the char is a digit. Returns non-zero it it is, returns zero
// if it's not. #include <ctype.h>
#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	return (0);
}

// int	main(void)
// {
//  printf("ft_figit.c teste:%d\n", ft_isdigit(64));
//  printf("ft_digit.c teste:%d\n", ft_isdigit(49));
// }
