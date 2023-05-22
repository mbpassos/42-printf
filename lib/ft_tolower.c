/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrito-p <mbrito-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 23:43:58 by mbrito-p          #+#    #+#             */
/*   Updated: 2023/05/11 23:43:58 by mbrito-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		c += 'a' - 'A';
	return (c);
}

// int	main(void)
// {
// 	printf("To lowercase test: %c\n", ft_tolower('A'));
// 	return (0);
// }