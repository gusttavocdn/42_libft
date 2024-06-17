#include "../includes/libft.h"

char *ft_strrchr(const char *str, int c)
{
	char *s;
	size_t str_len;

	str_len = ft_strlen(str);
	s = (char *) str + str_len;
	while (str_len--)
	{
		if (*s == (unsigned char) c)
			return (s);
		s--;
	}
	if (*s == (unsigned char) c)
		return (s);
	return (NULL);
}
