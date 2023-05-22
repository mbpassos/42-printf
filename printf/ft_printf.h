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
int			ft_putunsigned(unsigned int nb);
int			ft_puthex(unsigned int num, const char format);
char	*ft_char(char *s, unsigned int number, long int len);
long int	ft_len(int n);
char	*ft_itoa(int n);
int	ft_putnbr(int n);
int	ft_unsigned_len(unsigned int nb);
char	*ft_uitoa(unsigned int nb);
int	ft_putunsigned(unsigned int nb);
int	hex_len(unsigned int num);
void	ft_put_hex(unsigned int num, const char format);
int	ft_puthex(unsigned int num, const char format);
int flag_conversion(va_list args, const char format);
int ft_printf(const char *format, ...);

#endif