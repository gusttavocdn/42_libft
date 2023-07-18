/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gusda-si <gusda-si@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 22:35:05 by gusda-si          #+#    #+#             */
/*   Updated: 2023/07/18 08:08:52 by gusda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

size_t	ft_strlen(const char *s)
{
	char	*s_begin;

	s_begin = (char *)s;
	while (*s != '\0')
		s++;
	return ((size_t)(s - s_begin));
}
