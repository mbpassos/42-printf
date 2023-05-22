/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/14 20:09:18 by mbrito-p          #+#    #+#             */
/*   Updated: 2023/05/15 17:09:36 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdlib.h>
// allocates memory for an array of 'nmemb'
//(a certain int value of) elements of 
// 'size' bytes each and returns a pointer to the allocated 
// memory. The memory is set to zero. 
//ft_memset(ptr, 0, total_memory_size); avoids unexpected behaviour.
#include "libft.h"

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

// int main()  
// {
//     // test case 1: allocate 10 ints using ft_calloc and initialize them to 0
//     int *arr1 = (int*)ft_calloc(10, sizeof(int));
//     if (arr1 != NULL) {
//         for (int i = 0; i < 10; i++) {
//             printf("%d ", arr1[i]); // expected output: 0 0 0 0 0 0 0 0 0 0
//         }
//         printf("\n");
//         free(arr1);
//     }    
//     // test case 2: allocate 10 ints using calloc and initialize them to 0
//     int *arr2 = (int*)calloc(10, sizeof(int));
//     if (arr2 != NULL) {
//         for (int i = 0; i < 10; i++) {
//             printf("%d ", arr2[i]); // expected output: 0 0 0 0 0 0 0 0 0 0
//         }
//         printf("\n");
//         free(arr2);
//     }    
//     return 0;
// }
