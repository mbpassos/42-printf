/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_ptr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrito-p <mbrito-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 23:15:07 by mbrito-p          #+#    #+#             */
/*   Updated: 2023/05/25 23:15:07 by mbrito-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// If we have a pointer ptr that points to a memory address, 
// its typical representation would be something like 0x7ffd83af4a40. Here, 
// the "0x" prefix indicates that the value is in hexadecimal format, and 
// the following digits represent the actual memory address.
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

/*Remove null bytes from the begining of the adress*/
char	*clean_adress(char *adress)
{
	int		i;
	int		k;
	int		j;
	char	*c_adress;

	i = 19;
	k = 0;
	j = 0;
	c_adress = ft_calloc(sizeof(char), 19);
	while (j < 19)
	{
		if (adress[j])
		{
			c_adress[k++] = adress[j];
			i++;
		}
		j++;
	}
	free(adress);
	return (c_adress);
}

/*Convert pointer adress to decimal and then to hexadecimal
and finally convert it to a string*/
int	ft_print_pointer(void *ptr)
{
	uintptr_t	d_adress;
	char		*adress;
	char		*c_adress;
	int			w_bytes;
	int			i;

	d_adress = (uintptr_t)ptr;
	if (!d_adress)
		return (ft_putstr("(nil)"));
	adress = ft_calloc(sizeof(char), 19);
	if (!adress)
		return (0);
	i = 18;
	while (d_adress > 0 && i > 1)
	{
		adress[i] = "0123456789abcdef"[d_adress % 16];
		d_adress /= 16;
		i--;
	}
	adress[i--] = 'x';
	adress[i] = '0';
	c_adress = clean_adress(adress);
	w_bytes = ft_putstr(c_adress);
	free(c_adress);
	return (w_bytes);
}