#include "libft.h"

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
	while ((*s1 == *s2) && (*s1 != '\0' && *s2 != '\0') && n > 0)
	{
		s1++;
		s2++;
		n--;
	}
	if (n == 0) return (0);
	return ((size_t) *s1 - (size_t) *s2);
}
