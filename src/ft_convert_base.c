#include "../includes/libft.h"

static bool there_is_base_errors(char *base);

char *ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int nbr_in_decimal;
	char *converted_number;

	if (there_is_base_errors(base_from) || there_is_base_errors(base_to))
		return (NULL);
	nbr_in_decimal = ft_atoi_base(nbr, base_from);
	converted_number = ft_itoa_base(nbr_in_decimal, base_to);
	return (converted_number);
}

static bool there_is_base_errors(char *base)
{
	int i;
	int j;
	int base_len;

	i = 0;
	base_len = ft_strlen(base);
	while (i < base_len)
	{
		if (ft_isspace(base[i]))
			return (true);
		if (base[i] == '+' || base[i] == '-')
			return (true);
		j = i + 1;
		while (j < base_len)
		{
			if (base[j] == base[i])
				return (1);
			j++;
		}
		i++;
	}
	return (false);
}
