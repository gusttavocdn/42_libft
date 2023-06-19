/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gusda-si <gusda-si@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 22:35:05 by gusda-si          #+#    #+#             */
/*   Updated: 2023/06/18 15:37:59 by gusda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	char	*s_begin;

	if (s == NULL)
		return (0);
	s_begin = (char *)s;
	while (*s != '\0')
		s++;
	return ((size_t)(s - s_begin));
}
