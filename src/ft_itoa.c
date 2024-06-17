#include "../includes/libft.h"

char *ft_itoa(int n)
{
	char *number;
	int size;
	long int nb;
	size_t i;

	nb = n;
	size = ft_calc_nbr_digits(nb, 10);
	number = (char *) ft_calloc(size + NULL_BYTE, sizeof(char));
	if (!number)
		return (NULL);
	i = size - 1;
	if (nb < 0)
	{
		number[0] = '-';
		nb *= -1;
	}
	if (nb == 0)
		number[0] = '0';
	while (nb > 0)
	{
		number[i--] = (nb % 10) + '0';
		nb /= 10;
	}
	number[size] = '\0';
	return (number);
}
