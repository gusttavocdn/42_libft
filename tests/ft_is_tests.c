#include "../libft.h"
#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>


void ft_is_test_helper(t_string name, int (fake_func)(int),
                       int (original_func)(int));

void ft_is_tester(void)
{
	ft_is_test_helper("ISALPHA", ft_isalpha, isalpha);
	ft_is_test_helper("ISDIGIT", ft_isdigit, isdigit);
	ft_is_test_helper("ISASCII", ft_isascii, isascii);
	ft_is_test_helper("ISPRINT", ft_isprint, isprint);
	ft_is_test_helper("ISALNUM", ft_isalnum, isalnum);
}


void
ft_is_test_helper(t_string name, int (fake_func)(int), int (original_func)
		(int))
{
	bool original;
	bool fake;
	unsigned char i;
	unsigned char max_ascii_extended_value;

	max_ascii_extended_value = 255;
	i = 0;
	printf("\n\e[1;36m -------FT_%s TESTS-------\e[0m\n", name);
	while (i < max_ascii_extended_value)
	{
		original = original_func(i);
		fake = fake_func(i);
		printf("Input: %c || Original Result: %d || Fake Result: %d ", i,
		       original, fake);
		printf("Match: %s\n ",
		       original == fake ? "\e[0;32mYes\e[0m " : "\e[4;31m Error\e[0m ");
		i++;
	}
}
