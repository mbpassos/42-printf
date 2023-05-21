#ifndef FT_PRINTF_H
# define FT_PRINTF_H

#include <stdarg.h>
#include <stdio.h>
#include <limits.h>
#include "libft_walter/libft.h"

int	ft_putnbr(int nb);
int	ft_putchar(const char c);
int	ft_putstr(const char *str);
int	ft_printf(const char *params, ...);
int	ft_uns_dec_base(unsigned int nb);
int	ft_hex_base(unsigned long nb, int fmt);
int	flag_conversion(char fmt, va_list args);
int ft_printf(const char *params, ...);

#endif