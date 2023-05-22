/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrito-p <mbrito-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 23:44:17 by mbrito-p          #+#    #+#             */
/*   Updated: 2023/05/11 23:44:17 by mbrito-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// LIBRARY: <string.h>
// SYNOPSIS: locate character in string (first occurrence)
// DESCRIPTION: The strchr() function locates the first
// occurrence of c (converted to a char) in the string pointed to by s.
// The terminating null character is considered to be part of the string;
// therefore if c is `\0', the functions locate the terminating `\0'. 
//If the character c is found, return a pointer to that character, otherwise
// return a null pointer
#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s && (unsigned char)c != *s)
		s++;
	if ((unsigned char)c == *s)
		return ((char *)s);
	return (0);
}

// int main() {
//    char str[] = "hello world";
//    char *ptr = ft_strchr(str, 'w');
//    if (ptr != NULL) {
//       printf("Char 'w' found at position %ld.\n", ptr - str);
//    } else {
//       printf("Char 'w' was not found.\n");
//    }
//    return 0;
// }
