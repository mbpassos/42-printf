/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrito-p <mbrito-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 20:23:00 by mbrito-p          #+#    #+#             */
/*   Updated: 2023/05/22 20:23:00 by mbrito-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdio.h>
# include <unistd.h>
# include "lib/libft.h"

int	ft_putnbr(int n);
int	ft_putchar(int c);
int	ft_putstr(char *str);
int ft_puthex(unsigned int n, const char format);
char	*ft_get_char(char *s, unsigned int n, int len);
int ft_get_len(int n);
char    *ft_itoa(int n);
int ft_putnbr(int n);
int ft_get_unsigned_len(unsigned int n);
char    *ft_uitoa(unsigned int n);
int ft_putunbr(unsigned int n);
int ft_hex_len(unsigned int n);
void    ft_put_hex(unsigned int n, const char format);
int ft_putptr(uintptr_t ptr);
int	ft_puthex(unsigned int num, const char format);
int flag_conversion(va_list args, const char format);
int ft_printf(const char *format, ...);

#endif