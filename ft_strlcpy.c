/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gusda-si <gusda-si@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 00:24:08 by gusda-si          #+#    #+#             */
/*   Updated: 2023/06/14 01:24:13 by gusda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	length;

	length = ft_strlen(src);
	if (size <= 0)
		return (length);
	while ((*src != '\0') && (size-- > 1))
		*dst++ = *src++;
	*dst = '\0';
	return (length);
}
