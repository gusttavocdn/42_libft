#include "../includes/libft.h"

ssize_t ft_putnbr_fd(long int n, int fd)
{
	ssize_t base_len;
	ssize_t bytes_written;

	bytes_written = 0;
	base_len = 10;
	if (n < 0)
	{
		bytes_written += ft_putchar_fd('-', fd);
		n *= -1;
	}
	if (n >= base_len)
		bytes_written += ft_putnbr_fd(n / 10, fd);
	bytes_written += ft_putchar_fd((n % 10) + '0', fd);
	return (bytes_written);
}
