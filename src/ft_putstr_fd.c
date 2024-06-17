#include "../includes/libft.h"

ssize_t ft_putstr_fd(char *s, int fd)
{
	if (!s)
		return (write(fd, "(null)", 6));
	return write(fd, s, ft_strlen(s));
}
