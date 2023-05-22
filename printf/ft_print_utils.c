/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_utils.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrito-p <mbrito-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 18:58:10 by mbrito-p          #+#    #+#             */
/*   Updated: 2023/05/22 20:34:58 by mbrito-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int nb)
{
	long int	long_int;

	long_int = nb;
	if (long_int < 0)
	{
		ft_putchar('-');
		long_int *= -1;
	}
	if (long_int > 9)
		ft_putnbr(long_int / 10);
	ft_putchar(long_int % 10 + '0');
	return (nb);
}

int	ft_putchar(const char c)
{
	write(1, &c, 1);
	return (0);
}

int	ft_putstr(const char *str)
{
	int	c;

	c = 0;
	if (!str)
		return (ft_putstr("(null)"));
	while (str[c])
	{
		write(1, &str[c], 1);
		c++;
	}		
	return (c);
}

int	ft_uns_dec_base(unsigned int nb)
{
	int c;

	c = 0;
	if (nb >= 10)
	{
		c += ft_uns_dec_base(nb/10);
		c += ft_uns_dec_base(nb % 10);
	}
	else 
	c += ft_putchar("0123456789"[nb]);
	return (c);
}

int	ft_hex_base(unsigned long nb, int fmt)
{
	int		c;
	char	*base;

	c = 0;
	if (nb == 0)
		return (write(1, "0", 1));
	if (fmt == 'x')
		base = "0123456789abcdef";
	if (fmt == 'X')
		base = "0123456789ABCDEF";
	if (nb >= 16)
	{
		c += ft_hex_base(nb / 16, fmt);
		c += ft_hex_base(nb % 16, fmt);
	}
	else
		c += ft_putchar(base[nb]);
	return (c);
}

