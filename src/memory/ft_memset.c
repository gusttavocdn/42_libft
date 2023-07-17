/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gusda-si <gusda-si@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 22:59:27 by gusda-si          #+#    #+#             */
/*   Updated: 2023/07/17 20:48:18 by gusda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

// NOTES
/*
It is important to cast the void pointer on this function to an unsigned char
this is a way to ensure that we are handling byte to byte
of the memory area pointer by *s

This functions is able to handle memory pointer to severl data types.
It kind of data has a specic default byte size to store info.
Example	INT = 4 bytes.
*/
#include <stdio.h>

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*memory_addr;

	memory_addr = (unsigned char *)s;
	while (n--)
		*memory_addr++ = (unsigned char)c;
	return (s);
}

int	main(void)
{
	char	arr[3];

	arr[0] = 'G';
	arr[1] = 'G';
	arr[2] = 'G';
	printf("%s", ft_memset(arr, 'A', 3));
	return (0);
}
