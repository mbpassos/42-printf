/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_uns_dec_base.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrito-p <mbrito-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 20:45:12 by mbrito-p          #+#    #+#             */
/*   Updated: 2023/05/25 20:45:12 by mbrito-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_get_unsigned_len(unsigned int n)
{
    int len;
    
    len = 0;
    while (n != 0)
    {
        len++;
        n = n / 10;
    }
    return (len);	
}

char	*ft_uitoa(unsigned int n)
{
	char *str;
    int len;

    len = ft_get_unsigned_len(n);
    str = (char *)malloc(sizeof(char) * (len + 1));
    if (!str)
        return (NULL);
    str[len] = '\0';
    while (n != 0)
    {
        str[len - 1] = (n % 10) + 48;
        n = n / 10;
        len--;
    }
    return (str);    
}

int	ft_putunbr(unsigned int n)
{
	int nbr_of_chars_printed;
    char *str;

    nbr_of_chars_printed = 0;
    if (n == 0)
        nbr_of_chars_printed += write(1, "0", 1);
    else
    {
        str = ft_uitoa(n);
        nbr_of_chars_printed += ft_putstr(str);
        free(str);
    }
    return (nbr_of_chars_printed);
}