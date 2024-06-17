#include "../includes/libft.h"

void *ft_memset(void *s, int c, size_t n)
{
	unsigned char *memory_addr;

	memory_addr = (unsigned char *) s;
	while (n--)
		*memory_addr++ = (unsigned char) c;
	return (s);
}
