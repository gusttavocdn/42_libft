#include "../libft.h"
#include <stdio.h>
#include <string.h>

void ft_strlen_tester_helper(t_string word);

void ft_strlen_tester(void)
{
	printf("\n \e[1;36m -------FT_STRLEN TESTS-------\e[0m\n\n");
	ft_strlen_tester_helper("Sasuke");
	ft_strlen_tester_helper("Naruto");
	ft_strlen_tester_helper("");
	ft_strlen_tester_helper(" ");
	// The original function gives segfault when we pass NULL.
	// ft_strlen_tester_helper(NULL);
	ft_strlen_tester_helper("Hey its me Mário");
}

void ft_strlen_tester_helper(t_string word)
{
	size_t original;
	size_t fake;

	original = strlen(word);
	fake = ft_strlen(word);
	printf("Input: %s || Original Result: %zu || Fake Result: %zu ", word,
	       original, fake);
	printf("Match: %s\n ",
	       original == fake ? "\e[0;32mYes\e[0m" : "\e[4;31m Error\e[0m");
}
