/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrito-p <mbrito-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 02:43:08 by mbrito-p          #+#    #+#             */
/*   Updated: 2023/05/15 02:43:08 by mbrito-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Allocates (with malloc(3)) and returns a new
// string, which is the result of the concatenation
// of ’s1’ and ’s2’.Return value: The new string.
// NULL if the allocation fails.
//final_str + len1 pointer to where it starts counting
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len1;
	size_t	len2;
	char	*final_str;

	if (!s1 || !s2)
		return (NULL);
	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	final_str = (char *)malloc(sizeof(char) * (len1 + len2 + 1));
	if (!final_str)
		return (NULL);
	ft_memcpy(final_str, s1, len1);
	ft_memcpy(final_str + len1, s2, len2);
	final_str[len1 + len2] = '\0';
	return (final_str);
}

// int main(void)
// {
//     char    s1[] = "Hello ";
//     char    s2[] = "World!";
//     printf("ft_strjoin:%s", ft_strjoin(s1, s2));
//     return (0);
// }
