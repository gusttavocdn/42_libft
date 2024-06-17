#include "../includes/libft.h"

char *ft_strchr(const char *str, int c)
{
	while (*str != '\0')
	{
		if (*str == (unsigned char) c)
			return ((char *) str);
		str++;
	}
	if (*str == (unsigned char) c)
		return ((char *) str);
	return (NULL);
}
