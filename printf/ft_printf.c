
#include "ft_printf.h"
#include <stdarg.h>

int	flag_conversion(char params, va_list args)
{
    int i;

    i = 0;
    if (params == '%')
        i += write(1, &params, 1);
    if (params == 'c')
        i += ft_putchar(va_arg(args, int));
    if (params == 's')
        i += ft_putstr(va_arg(args, char *));
    if (params == 'd' || 'i')
        i += ft_putnbr(va_arg(args, int));
    if (params == 'x' || 'X')
        i += ft_hex_base(va_arg(args, unsigned_int), params);
    if  (params == 'p')
    {
        i += write(1, "0x", 2);
        i += ft_hex_base(va_arg(args, unsigned_int), params);
    }
    if  (params == 'u')
        i += ft_uns_dec_base(va_arg(args, unsigned_int));
    return (i);
}

int ft_printf(const char *params, ...)
{
    va_list args;
    size_t  i;
    int c;

    c = 0;
    i = 0;
    va_start(args, params);
    while(params[i])
    {
        if(params[i] == '%')
        {
            i++;
            c += flag_conversion(params[i], args);
        }
        else
        {
            ft_putchar(str[i]);
            c++;
        }
        i++;
    }
    va_end(args);
    return (c); 
}