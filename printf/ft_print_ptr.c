/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_ptr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrito-p <mbrito-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 23:15:07 by mbrito-p          #+#    #+#             */
/*   Updated: 2023/05/31 20:21:02 by mbrito-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// If we have a pointer ptr that points to a memory address, 
// its typical representation would be something like 0x7ffd83af4a40. Here, 
// the "0x" prefix indicates that the value is in hexadecimal format, and 
// the following digits represent the actual memory address.
// memset fills a block of memory with a specific value
// calloc allocates dinamically the memory of an array of nmemb elemnts each 
// ze bytes long. The reason for removing null bytes is to ensure that the 
// resulting string representation of the address doesn't have any leading 
// zeros. The address is converted to hexadecimal representation, and leading 
// zeros in hexadecimal can be misleading or unnecessary. By removing null 
// bytes, the resulting string will start with the actual hexadecimal digits 
// of the address.
#include "ft_printf.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*ptr;

	ptr = (unsigned char *)s;
	while (n-- > 0)
	{
		*(ptr++) = (unsigned char)c;
	}
	return (s);
}

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	total_memory_size;
	void	*ptr;

	total_memory_size = nmemb * size;
	ptr = malloc(total_memory_size);
	if (ptr == NULL)
		return (NULL);
	ft_memset(ptr, 0, total_memory_size);
	return (ptr);
}

char	*clean_address(char *address)
{
	int		i;
	int		k;
	int		j;
	char	*cleaned_address;

	i = 19;
	k = 0;
	j = 0;
	cleaned_address = (char *)ft_calloc(sizeof(char), 19);
	while (j < 19)
	{
		if (address[j])
		{
			cleaned_address[k++] = address[j];
			i++;
		}
		j++;
	}
	free(address);
	return (cleaned_address);
}

int	ft_print_pointer(void *ptr)
{
	uintptr_t	decimal_address;
	char		*address;
	char		*cleaned_address;
	int			w_bytes;
	int			i;

	decimal_address = (uintptr_t)ptr;
	if (!decimal_address)
		return (ft_putstr("(nil)"));
	address = (char *)ft_calloc(sizeof(char), 19);
	if (!address)
		return (0);
	i = 18;
	while (decimal_address > 0 && i > 1)
	{
		address[i] = "0123456789abcdef"[decimal_address % 16];
		decimal_address /= 16;
		i--;
	}
	address[i--] = 'x';
	address[i] = '0';
	cleaned_address = clean_address(address);
	w_bytes = ft_putstr(cleaned_address);
	free(cleaned_address);
	return (w_bytes);
}

// int	main()
// {
// 	int value = 42;
// 	int *ptr = &value;
// 	printf("Printing pointer: ");
// 	ft_print_pointer(ptr);
// 	printf("\n");
// 	return 0;
// }
