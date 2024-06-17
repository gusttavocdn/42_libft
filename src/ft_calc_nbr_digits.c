#include "../includes/libft.h"

int ft_calc_nbr_digits(long int number, int base_len)
{
	int digits;

	digits = 1;
	if (number < 0)
		digits++;
	number /= base_len;
	while (number)
	{
		digits++;
		number /= base_len;
	}
	return (digits);
}
