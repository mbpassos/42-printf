/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrito-p <mbrito-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 02:23:02 by mbrito-p          #+#    #+#             */
/*   Updated: 2023/05/15 02:23:02 by mbrito-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Allocates (with malloc(3)) and returns a copy of
// ’s1’ with the characters specified in ’set’ removed
// from the beginning and the end of the string.
// Return value: The trimmed string.
// NULL if the allocation fails.
// you need to add 2 at sublen, not 1, to allocate 
// enough memory for the trimmed string and a null 
// terminator as well as to ensure proper alignment 
// of the allocated memory. 
#include "libft.h"

static int	is_set(char c, char const *set)
{
	while (*set)
	{
		if (c == *set)
			return (1);
		set++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t		len;
	size_t		sublen;
	char		*trimmed;
	size_t		i;
	size_t		j;

	len = ft_strlen(s1);
	i = 0;
	while (s1[i] && is_set(s1[i], set))
		i++;
	j = len - 1;
	while (j > i && is_set(s1[j], set))
		j--;
	sublen = j - i;
	trimmed = (char *)malloc(sizeof(char) * (sublen + 2));
	if (!trimmed)
		return (NULL);
	ft_memcpy(trimmed, s1 + i, sublen + 1);
	trimmed[sublen + 1] = '\0';
	return (trimmed);
}

// int	main(void)
// {
// 	char	*str;
// 	char	*trimmed;
// 	// Test case 1: trim leading and trailing spaces
// 	str = "   hello world   ";
// 	trimmed = ft_strtrim(str, " ");
// 	printf("Original string: '%s'\n", str);
// 	printf("Trimmed string: '%s'\n", trimmed);
// 	free(trimmed);
// 	// Test case 2: trim leading and trailing tabs
// 	str = "\t\t\tfoo bar\t\t\t";
// 	trimmed = ft_strtrim(str, "\t");
// 	printf("Original string: '%s'\n", str);
// 	printf("Trimmed string: '%s'\n", trimmed);
// 	free(trimmed);
// 	return (0);
// }
