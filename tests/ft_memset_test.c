#include "../libft.h"
#include <string.h>
#include <stdio.h>

void ft_memset_test_helper(char c, size_t bytes);

void ft_memset_tester(void)
{
	printf("\n\e[1;36m -------FT_MEMSET TESTS-------\e[0m\n");
	ft_memset_test_helper('d', 9);
	ft_memset_test_helper('x', 5);
	ft_memset_test_helper('a', 4);
	ft_memset_test_helper('b', 3);
}

void ft_memset_test_helper(char c, size_t bytes)
{
	char ft_memset_ptr[10];
	char memset_ptr[10];

	ft_memset(ft_memset_ptr, c, bytes);
	memset(memset_ptr, c, bytes);
	ft_memset_ptr[bytes] = '\0';
	memset_ptr[bytes] = '\0';
	printf("FT_MEMSET: %s || MEMSET: %s ", ft_memset_ptr, memset_ptr);
	if (strncmp(ft_memset_ptr, memset_ptr, bytes) == 0)
		printf("Match: %s\n", "\e[0;32mYes\e[0m");
	else
		printf("Match: %s\n", "\e[4;31m Error\e[0m");
}
