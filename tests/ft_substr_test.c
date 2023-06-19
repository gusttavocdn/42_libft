/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gusda-si <gusda-si@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 13:19:50 by gusda-si          #+#    #+#             */
/*   Updated: 2023/06/18 15:39:24 by gusda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_tests.h"

static void	ft_substr_tests_helper(char *str, unsigned int start, size_t len);
static void	ft_substr_edge_cases(void);

void	ft_substr_tester(void)
{
	char	*original_str;

	printf("\n \e[1;36m -------FT_SUBSTR TESTS-------\e[0m\n\n");
	original_str = "Gustavo da Silva Amaral Santos";
	ft_substr_tests_helper(original_str, 0, 7);
	ft_substr_tests_helper(original_str, 0, 6);
	ft_substr_tests_helper(original_str, 10, 6);
	ft_substr_tests_helper(original_str, 1, 1);
	ft_substr_tests_helper(original_str, ft_strlen(original_str),
			ft_strlen(original_str) + 1);
	ft_substr_tests_helper("1", 42, 42000000);
	ft_substr_edge_cases();
}

static void	ft_substr_tests_helper(char *str, unsigned int start, size_t len)
{
	char	*substr;

	substr = ft_substr(str, start, len);
	printf("Original: %s || Substr: %s || ",
			str,
			substr);
	printf("Result: %s", ft_strncmp(&str[start], substr,
				len) == 0 ? "\e[0;32mSuccess\e[0m" : "\e[4;31m Error\e[0m");
	printf("\n");
	free(substr);
}

static void	ft_substr_edge_cases(void)
{
	char	*substr;

	substr = ft_substr(NULL, 1, 10);
	printf("Should return (NULL if s == NULL => ");
	printf("%s\n",
			substr == NULL ? "\e[0;32mSuccess\e[0m" : "\e[4;31m Error\e[0m");
	substr = ft_substr("Guga", 1, 0);
	printf("Should return (NULL if len == 0 => ");
	printf("%s\n",
			substr == NULL ? "\e[0;32mSuccess\e[0m" : "\e[4;31m Error\e[0m");
	substr = ft_substr("Guga", 10, 0);
	printf("Should return (NULL if starts is greater than source_len => ");
	printf("%s\n",
			substr == NULL ? "\e[0;32mSuccess\e[0m" : "\e[4;31m Error\e[0m");
}
