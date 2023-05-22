/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrito-p <mbrito-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 18:48:12 by mbrito-p          #+#    #+#             */
/*   Updated: 2023/05/22 18:48:12 by mbrito-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar(int c)
{
	write(1, &c, 1);
	return (1);
}

int	ft_putstr(char *str)
{
	int	i;

	i = 0;
	if (str == NULL)
	{
		write(1, "(null)", 6);
		return (6);
	}
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
	return (i);
}

int flag_conversion(va_list args, const char format)
{
    int char_printed;

    char_printed = 0;
    if (format == '%')
        char_printed += write(1, &format, 1);
    if (format == 'c')
        char_printed += ft_putchar(va_arg(args, int));
    if (format == 's')
        char_printed += ft_putstr(va_arg(args, char *));
    if (format == 'd' || format == 'i')
        char_printed += ft_putnbr(va_arg(args, int));
    if (format == 'x' || format == 'X')
        char_printed += ft_puthex(va_arg(args, unsigned int), format);
    if (format == 'p')
    {
        char_printed += write(1, "0x", 2);
        char_printed += ft_puthex(va_arg(args, unsigned long long), 'x');
    }
    if (format == 'u')
        char_printed += ft_putunsigned(va_arg(args, unsigned int));
    return (char_printed);
}

int ft_printf(const char *format, ...)
{
    va_list args;
    size_t i;
    int char_printed;

    if (format == NULL)
        return (-1);
    char_printed = 0;
    i = 0;
    va_start(args, format);
    while (format[i])
    {
        if (format[i] == '%')
        {
            i++;
            char_printed += flag_conversion(args, format[i]);
            
        }
        else
        {
            ft_putchar(format[i]);
            char_printed++;
        }
        i++;
    }
    va_end(args);
    return (char_printed);
}