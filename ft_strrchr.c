/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gusda-si <gusda-si@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 01:28:05 by gusda-si          #+#    #+#             */
/*   Updated: 2023/06/14 01:46:55 by gusda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	char	*s;
	size_t	size;

	s = (char *)str + (ft_strlen(str));
	if (!c)
		return (s);
	size = ft_strlen(str) + 1;
	while (0 < size)
	{
		if ((unsigned char)*s == (unsigned char)c)
			return (s);
		size--;
		s--;
	}
	return (NULL);
}
