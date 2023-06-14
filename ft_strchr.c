/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gusda-si <gusda-si@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 01:25:28 by gusda-si          #+#    #+#             */
/*   Updated: 2023/06/14 01:27:49 by gusda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	char	*s_ptr;

	s_ptr = (char *)str;
	while (*s_ptr != '\0')
	{
		if (*s_ptr == (char)c)
			return (s_ptr);
		s_ptr++;
	}
	if (!c && !(*s_ptr))
		return (s_ptr);
	return (NULL);
}
