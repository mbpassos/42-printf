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

int flag_conversion(char params, va_list args)
{
    int c;

    c = 0;
    if (params == '%')
        c += write(1, &params, 1);
    if (params == 'c')
        c += ft_putchar(va_arg(args, int));
    if (params == 's')
        c += ft_putstr(va_arg(args, char *));
    if (params == 'd' || params == 'i')
        c += ft_putnbr(va_arg(args, int));
    if (params == 'x' || params == 'X')
        c += ft_hex_base(va_arg(args, unsigned int), params);
    if (params == 'p')
    {
        c += write(1, "0x", 2);
        c += ft_hex_base(va_arg(args, unsigned long long), 'x');
    }
    if (params == 'u')
        c += ft_uns_dec_base(va_arg(args, unsigned int));
    return (c);
}

int ft_printf(const char *params, ...)
{
    va_list args;
    size_t i;
    int c;

    c = 0;
    i = 0;
    va_start(args, params);
    while (params[i])
    {
        if (params[i] == '%')
        {
            i++;
            c += flag_conversion(params[i], args);
        }
        else
        {
            ft_putchar(params[i]);
            c++;
        }
        i++;
    }
    va_end(args);
    return c;
}