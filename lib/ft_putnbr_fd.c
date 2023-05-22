/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrito-p <mbrito-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/14 23:09:22 by mbrito-p          #+#    #+#             */
/*   Updated: 2023/05/14 23:09:22 by mbrito-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Outputs the integer ’n’ to the given file
// descriptor.
// Long int is used to handle the case where n 
// is the minimum value of int and cannot 
// be represented as a positive int.
// Otherwise I would have t create a condition:
// if (nb == -2147483648) to contemplate this number
// long int is typically 64 bytes instead of the int 32
// which means long int has wider ranges and also takes 
// more memory
// First, it checks if the given number long_int 
// is greater than 9. If it is, that means it has 
// at least two digits. In this case, it recursively 
// calls the ft_putnbr_fd function with long_int / 10 
// as the argument to print out the leftmost digit(s) 
// first. This means that the function will keep 
// dividing the number by 10 until it is less than 
// 10, which will give us the rightmost digit.
#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long int	long_int;

	long_int = n;
	if (long_int < 0)
	{
		ft_putchar_fd('-', fd);
		long_int *= -1;
	}
	if (long_int > 9)
		ft_putnbr_fd(long_int / 10, fd);
	ft_putchar_fd(long_int % 10 + '0', fd);
}

// int	main(void)
// { 	
// 	ft_putnbr_fd(12345, 1);  // Output: 12345
// 	ft_putchar_fd('\n', 1);
// 	ft_putnbr_fd(-6789, 1);  // Output: -6789
// 	ft_putchar_fd('\n', 1);
// 	ft_putnbr_fd(0, 1);      // Output: 0
// 	ft_putchar_fd('\n', 1);	
// 	return (0);
// }
