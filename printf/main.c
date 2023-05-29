#include "ft_printf.h"

int	main()
{
	int value = 42;
	int *ptr = &value;

	printf("Printing pointer: ");
	ft_print_pointer(ptr);
	printf("\n");

	return 0;
}