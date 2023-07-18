/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gusda-si <gusda-si@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 21:42:49 by gusda-si          #+#    #+#             */
/*   Updated: 2023/07/18 08:12:48 by gusda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

ssize_t	ft_putnbr_fd(int n, int fd)
{
	long int	number;
	ssize_t		bytes_written;

	number = n;
	bytes_written = 0;
	if (number < 0)
	{
		bytes_written += ft_putchar_fd('-', fd);
		number *= -1;
	}
	if (number <= 9)
		bytes_written += ft_putchar_fd((number % 10) + '0', fd);
	bytes_written += ft_putnbr_fd(number / 10, fd);
	bytes_written += ft_putchar_fd((number % 10) + '0', fd);
	return (bytes_written);
}
