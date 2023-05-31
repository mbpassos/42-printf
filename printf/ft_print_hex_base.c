/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex_base.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrito-p <mbrito-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 20:43:56 by mbrito-p          #+#    #+#             */
/*   Updated: 2023/05/31 20:07:00 by mbrito-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_hex_len(unsigned int n)
{
	int	len;

	len = 0;
	while (n != 0)
	{
		len++;
		n = n / 16;
	}
	return (len);
}

void	ft_put_hex(unsigned int n, const char format)
{
	if (n >= 16)
	{
		ft_put_hex(n / 16, format);
		ft_put_hex(n % 16, format);
	}
	else
	{
		if (n <= 9)
			ft_putchar((n + '0'));
		else
		{
			if (format == 'x')
				ft_putchar((n - 10) + 'a');
			if (format == 'X')
				ft_putchar((n - 10) + 'A');
		}
	}
}

int	ft_puthex(unsigned int n, const char format)
{
	if (n == 0)
		return (write(1, "0", 1));
	ft_put_hex(n, format);
	return (ft_hex_len(n));
}

// int main(void)
// {
//     unsigned int number = 255;
//     char format = 'x';
//     int hex_len = ft_hex_len(number);
//     ft_printf("Hex length of %u: %d\n", number, hex_len);
//     ft_printf("Hex representation of %u (format: %c): ", number, format);
//     ft_put_hex(number, format);
//     ft_printf("\n");
//     int chars_printed = ft_puthex(number, format);
//     ft_printf("\nNumber of characters printed: %d\n", chars_printed);
//     return 0;
// }
