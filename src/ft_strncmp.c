#include "../includes/libft.h"

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
	while ((*s1 == *s2) && (*s1 != '\0') && (*s2 != '\0') && n--)
	{
		s1++;
		s2++;
	}
	if (n == 0)
		return (0);
	return ((unsigned char) *s1 - (unsigned char) *s2);
}
