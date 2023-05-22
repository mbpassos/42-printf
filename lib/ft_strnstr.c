/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrito-p <mbrito-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/14 23:19:31 by mbrito-p          #+#    #+#             */
/*   Updated: 2023/05/14 23:19:31 by mbrito-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <string.h>
// This function locates the first occurrence of the 
// null-terminated string little in the null-terminated string 
// big, where not more than len characters are searched.
// Return the pointer to the start of the match.
// If no match is found, return NULL
#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	b;
	size_t	l;

	b = 0;
	l = 0;
	if (little[l] == '\0')
		return ((char *)big);
	while (big[b])
	{
		while (big[b + l] && big[b + l] == little[l] && len > (b + l))
			l++;
		if (little[l] == '\0')
			return ((char *)big + b);
		l = 0;
		b++;
	}
	return (NULL);
}

// int main(void)
// {
//     char haystack[] = "Sportsmanship";
//     char needle[] = "man";
//     char *result;
//     char *o_result;
//     result = ft_strnstr(haystack, needle, strlen(haystack));
//     printf("Result: %s\n", result);
//     return 0;
// }
