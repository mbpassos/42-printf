/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_dec_base.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrito-p <mbrito-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 20:45:36 by mbrito-p          #+#    #+#             */
/*   Updated: 2023/05/25 20:45:36 by mbrito-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ft_get_char(char *s, unsigned int n, int len)
{
	while (n > 0)
	{
		s[len] = 48 + (number % 10);
		len--;
		n = n / 10;		
	}
	return (s);
}

int	ft_get_len(int n)
{
	int len;

	len = 0;
	if (n <= 0)
		len = 1;
	while (n != 0)
	{
		len++;
		n = n / 10;
	}
	return (len);
	
}

char	*ft_itoa(int n)
{
	char	*s;
	int	len;
	unsigned int	result;
	int	sign;

	sign = 1;
	len = ft_get_len(n);
	s = (char *)malloc(sizeof(char) * (len + 1));
	if (!s)
		return (NULL);
	s[len] = '\0';
	len--;
	if (n == 0)
		s[0] = '0';
	if (n < 0)
	{
		sign *= -1;
		result = n * -1;
		s[0] = '-';
	}
	else	
		result = n;
	s = ft_get_char(s, result, len);
	return (s);	
}

int	ft_putnbr(int n)
{
	int	len;
	char *final_number;

	final_number = ft_itoa(n);
	len = ft_putstr(final_number);
	free(final_number);
	return (len);	
}