#include "../includes/libft.h"

char *ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t i;
	size_t l_size;

	if (!big && len == 0)
		return (NULL);
	i = 0;
	l_size = ft_strlen(little);
	if (!l_size)
		return ((char *) big);
	while ((*big != '\0') && (i + l_size <= len))
	{
		if (*big == *little)
			if (ft_strncmp(big, little, l_size) == 0)
				return ((char *) big);
		i++;
		big++;
	}
	return (NULL);
}
