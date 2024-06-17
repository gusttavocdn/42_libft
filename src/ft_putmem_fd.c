#include "../includes/libft.h"

ssize_t ft_putmem_fd(unsigned long number, int fd)
{
	ssize_t bytes_written;

	bytes_written = 0;
	if (number >= HEX_SIZE)
		bytes_written += ft_putmem_fd(number / HEX_SIZE, fd);
	bytes_written += ft_putchar_fd(HEX_LOWER[number % HEX_SIZE], fd);
	return (bytes_written);
}
