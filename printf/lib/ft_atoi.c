/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrito-p <mbrito-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 00:18:53 by mbrito-p          #+#    #+#             */
/*   Updated: 2023/05/12 00:18:53 by mbrito-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// library stdlib.h
//ft_isdigit(str[i]) returns boolean if is digit or not.
#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int					i;
	int					sign;
	unsigned long int	result;

	i = 0;
	sign = 1;
	result = 0;
	while (nptr[i] == 32 || (nptr[i] >= 9 && nptr[i] <= 13))
		i++;
	if (nptr[i] == '-')
	{
		sign = -1;
		i++;
	}
	else if (nptr[i] == '+')
		i++;
	while (ft_isdigit(nptr[i]))
	{
		result *= 10;
		result += nptr[i] - '0';
		i++;
	}
	return (result * sign);
}
// int main(void)
// {
//     char *str1 = "42";
//     char *str2 = "-123";
//     char *str3 = "2147483647";
//     char *str4 = "-2147483648";
//     char *str5 = "12abc34";
//     char *str6 = "   123";
//     char *str7 = "  \t  +456";
//     char *str8 = "789xyz";
//     int num1 = ft_atoi(str1);
//     int num2 = ft_atoi(str2);
//     int num3 = ft_atoi(str3);
//     int num4 = ft_atoi(str4);
//     int num5 = ft_atoi(str5);
//     int num6 = ft_atoi(str6);
//     int num7 = ft_atoi(str7);
//     int num8 = ft_atoi(str8);
//     printf("%s => %d\n", str1, num1);
//     printf("%s => %d\n", str2, num2);
//     printf("%s => %d\n", str3, num3);
//     printf("%s => %d\n", str4, num4);
//     printf("%s => %d\n", str5, num5);
//     printf("%s => %d\n", str6, num6);
//     printf("%s => %d\n", str7, num7);
//     printf("%s => %d\n", str8, num8);
//     return (0);
// }
