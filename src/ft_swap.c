#include "../includes/libft.h"

void ft_swap(void *a, void *b, size_t size)
{
	void *temp;

	temp = malloc(size);
	ft_memcpy(temp, a, size);
	ft_memcpy(a, b, size);
	ft_memcpy(b, temp, size);
	free(temp);
}
