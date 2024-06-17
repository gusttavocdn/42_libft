#include "../includes/libft.h"

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t i;
	char *new_str;

	if (!s || !f)
		return (NULL);
	new_str = ft_calloc(ft_strlen(s) + NULL_BYTE, sizeof(char));
	if (!new_str)
		return (NULL);
	i = 0;
	while (s[i] != '\0')
	{
		new_str[i] = f(i, s[i]);
		i++;
	}
	return (new_str);
}
