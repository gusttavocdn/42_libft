#include "../includes/libft.h"

void *ft_calloc(size_t nmemb, size_t size)
{
	char *pointer;
	size_t i;

	i = 0;
	if (!size || !nmemb)
		return (malloc(0));
	if (nmemb > __SIZE_MAX__ / size)
		return (NULL);
	pointer = malloc(size * nmemb);
	while (i < size * nmemb)
	{
		pointer[i] = 0;
		i++;
	}
	return (pointer);
}
