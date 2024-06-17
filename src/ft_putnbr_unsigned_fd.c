#include "../includes/libft.h"

ssize_t ft_putnbr_unsigned_fd(unsigned int n, int fd)
{
	size_t base_len;
	ssize_t bytes_written;

	bytes_written = 0;
	base_len = 10;
	if (n >= base_len)
		bytes_written += ft_putnbr_unsigned_fd(n / base_len, fd);
	bytes_written += ft_putchar_fd((n % 10) + '0', fd);
	return (bytes_written);
}
