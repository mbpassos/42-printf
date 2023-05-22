/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrito-p <mbrito-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 01:05:20 by mbrito-p          #+#    #+#             */
/*   Updated: 2023/05/15 01:05:20 by mbrito-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Applies the function ’f’ TO each character of the
// string ’s’, and passing its index as first argument
// to create a new string (with malloc(3)) resulting
// from successive applications of ’f’.
// Return value: The string created from the 
// successive applications of ’f’.
// Returns NULL if the allocation fails.

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	i;
	size_t	len;
	char	*str_res;

	i = 0;
	len = ft_strlen(s);
	str_res = (char *)malloc(sizeof(char) * (len + 1));
	if (!str_res)
		return (NULL);
	while (i < len)
	{
		str_res[i] = f(i, s[i]);
		i++;
	}
	str_res[i] = '\0';
	return (str_res);
}

// char	ft_transform_2(unsigned int i, char c)
// {
// 	if (i % 2 == 0)
// 		return (ft_toupper(c));
// 	else
// 		return (ft_tolower(c));
// }
// int main(void)
// {
// 	char *str = "hello world";
// 	char *transformed_str = ft_strmapi(str, ft_transform_2);
// 	printf("%s\n", transformed_str);
// 	free(transformed_str);
// 	return (0);
// }