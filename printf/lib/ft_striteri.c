/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrito-p <mbrito-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 03:00:55 by mbrito-p          #+#    #+#             */
/*   Updated: 2023/05/15 03:00:55 by mbrito-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Applies the function ’f’ ON each character of
// the string passed as argument, passing its index
// as first argument. Each character is passed by
// address to ’f’ to be modified if necessary.
// ft_strmapi transforms the input string into a new 
// string by applying a function to each character and 
// its index, whereas ft_striteri simply applies a 
// function to each character and its index in the input 
// string without modifying the original string.
// In other words, when you pass a pointer to a 
// string to a function, you are passing a copy 
// of the pointer to the function, not the actual 
// string. Therefore, any modifications made to 
// the pointer inside the function do not affect 
// the original pointer or the original string.
#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	if (!s || !f)
		return ;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}

// void ft_print_char_index(unsigned int index, char *c)
// {
//     printf("Index %d: %c\n", index, *c);
// }
// int main(void)
// {
//     char str[] = "Hello, world!";
//     ft_striteri(str, ft_print_char_index);
//     return 0;
// }
