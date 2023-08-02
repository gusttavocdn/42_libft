/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gusda-si <gusda-si@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 12:17:38 by gusda-si          #+#    #+#             */
/*   Updated: 2023/08/02 11:51:09 by gusda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	char	*pointer;
	size_t	i;

	i = 0;
	if (!size || !nmemb)
		return (malloc(0));
	if (nmemb > __SIZE_MAX__ / size)
		return (NULL);
	pointer = malloc(size * nmemb);
	if (!pointer)
		return (NULL);
	while (i < size * nmemb)
	{
		pointer[i] = 0;
		i++;
	}
	return (pointer);
}
