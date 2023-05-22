/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrito-p <mbrito-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 21:31:19 by mbrito-p          #+#    #+#             */
/*   Updated: 2023/05/10 21:31:19 by mbrito-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Checks if the char is alphabetical. Returns non-zero it it is, returns zero
// if it's not. #inclide <ctype.h>
#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	return (0);
}

// int	main(void)
// {
// 	    printf("ft_isalpha.c teste:%d\n", ft_isalpha(64));
// 	    printf("ft_isalpha.c teste:%d\n", ft_isalpha(79));
// }