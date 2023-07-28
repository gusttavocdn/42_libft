/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gusda-si <gusda-si@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 02:14:18 by gusda-si          #+#    #+#             */
/*   Updated: 2023/07/27 02:14:36 by gusda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

int	ft_atoi(const char *str)
{
	int	number;
	int	signal;

	while (ft_isspace(*str))
		str++;
	signal = 1;
	if (*str == '+' || *str == '-')
	{
		if (*str == '-')
			signal *= -1;
		str++;
	}
	number = 0;
	while ((*str >= '0' && *str <= '9') && (*str != '\0'))
	{
		number *= 10;
		number += *str - '0';
		str++;
	}
	return (number * signal);
}


// Make a main to test the above function

int	main(void)
{
	char	*str;
	int		number;

	str = "   -1234567890";
	number = ft_atoi(str);
	printf("The string is: %s\n", str);
	printf("The number is: %d\n", number);
	return (0);
}
