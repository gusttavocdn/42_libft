#include "../includes/libft.h"

void *ft_memchr(const void *str, int c, size_t n)
{
	unsigned char *s;

	s = (unsigned char *) str;
	while (n--)
	{
		if (*s == (unsigned char) c)
			return (s);
		s++;
	}
	return (NULL);
}
