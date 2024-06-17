#include "../includes/libft.h"

void *ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char *dest_ptr;
	const unsigned char *src_ptr;

	if (!dest || !src)
		return (NULL);
	src_ptr = src;
	dest_ptr = dest;
	if (dest_ptr < src_ptr)
	{
		while (n--)
			*dest_ptr++ = *src_ptr++;
		return (dest);
	}
	while (n--)
		dest_ptr[n] = src_ptr[n];
	return (dest);
}
