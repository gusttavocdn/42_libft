#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

int main(void)
{
	char *pointer;

	pointer = (char *)ft_calloc(121321, 324);
	printf("%p\n", pointer);
	printf("%lu", __SIZE_MAX__);
	free(pointer);
	return (0);
}
