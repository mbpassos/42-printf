/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_single_char.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrito-p <mbrito-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 18:39:58 by mbrito-p          #+#    #+#             */
/*   Updated: 2023/05/25 18:39:58 by mbrito-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar(int c)
{
	write(1, &c, 1);
	return (1);
}

// int main()
// {
//     char c = 'A';

//     int chars_printed = ft_putchar(c);
//     ft_printf("Character printed: %c\n", c);
//     ft_printf("Number of characters printed: %d\n", chars_printed);

//     return 0;
// }