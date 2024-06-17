#include "../includes/libft.h"

size_t ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t dest_len;
	size_t src_len;
	size_t final_len;

	src_len = ft_strlen(src);
	if (!dst || size == 0)
		return (src_len + size);
	dest_len = ft_strlen(dst);
	final_len = dest_len + src_len;
	if (size > dest_len)
	{
		while ((*src != '\0') && (dest_len < size - 1))
			dst[dest_len++] = *src++;
		return (final_len);
	}
	return (src_len + size);
}
