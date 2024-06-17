#include "../includes/libft.h"

static int is_on_set(int c, char const *set);

char *ft_strtrim(char const *s1, char const *set)
{
	size_t start;
	size_t end;
	char *new_str;

	if (!set || !s1)
		return (NULL);
	start = 0;
	end = ft_strlen(s1) - NULL_BYTE;
	while (is_on_set(s1[end], set) && end)
		end--;
	while (is_on_set(s1[start], set))
		start++;
	new_str = ft_substr(s1, start, end - start + 1);
	if (!new_str)
		return (NULL);
	return (new_str);
}

static int is_on_set(int c, char const *set)
{
	while (*set != '\0')
	{
		if ((unsigned char) c == *set)
			return (TRUE);
		set++;
	}
	return (FALSE);
}
