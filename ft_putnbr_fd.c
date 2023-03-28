#include "libft.h"

static void show_min_int(char *nbr, int fd);

void ft_putnbr_fd(int n, int fd)
{
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		if (n == -2147483648)
		{
			show_min_int("2147483648", fd);
			return;
		}
		n *= -1;
	}
	if (n < 10)
		ft_putchar_fd(n + '0', fd);
	else
	{
		ft_putnbr_fd(n / 10, fd);
		ft_putnbr_fd(n % 10, fd);
	}
}

static void show_min_int(char *nbr, int fd)
{
	while (*nbr)
		ft_putchar_fd(*nbr++, fd);
}