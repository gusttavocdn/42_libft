/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gusda-si <gusda-si@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 01:42:17 by gusda-si          #+#    #+#             */
/*   Updated: 2023/07/12 21:01:27 by gusda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *str1, const void *str2, size_t n)
{
	unsigned char	*s1;
	unsigned char	*s2;

	s1 = (unsigned char *)str1;
	s2 = (unsigned char *)str2;
	while ((*s1 == *s2) && n > 0 && s1 && s2)
	{
		s1++;
		s2++;
		n--;
	}
	if (n == 0)
		return (0);
	return ((unsigned char)*s1 - (unsigned char)*s2);
}

// #include <stdio.h>
// #include <string.h>

// int	main(void)
// {
// 	char	*b1;
// 	char	*b2;

// 	b1 = "11111111";
// 	b2 = "11111111";
// 	printf("memcmp: %d\n", memcmp(b1, b2, 10));
// 	printf("ft_memcmp: %d\n", ft_memcmp(b1, b2, 10));
// 	return (0);
// }
