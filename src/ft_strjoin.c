#include "../includes/libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
	char *new_str;
	size_t len;

	if (!s1 || !s2)
		return (NULL);
	len = ft_strlen(s1) + ft_strlen(s2);
	new_str = (char *) ft_calloc(len + NULL_BYTE, sizeof(char));
	if (!new_str)
		return (NULL);
	while (s1 && *s1 != '\0')
		*new_str++ = *s1++;
	while (s2 && *s2 != '\0')
		*new_str++ = *s2++;
	return ((new_str - len));
}
