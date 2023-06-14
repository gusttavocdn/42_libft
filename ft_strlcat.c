/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gusda-si <gusda-si@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 00:06:17 by gusda-si          #+#    #+#             */
/*   Updated: 2023/06/14 01:21:00 by gusda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dest_len;
	size_t	f_len;
	size_t	src_len;
	size_t	src_i;

	src_len = ft_strlen(src);
	if (!dst && size == 0)
		return (src_len + size);
	dest_len = ft_strlen(dst);
	f_len = dest_len + src_len;
	src_i = 0;
	if (size > dest_len)
	{
		while ((src[src_i] != '\0') && (dest_len < size - 1))
			dst[dest_len++] = src[src_i++];
		dst[dest_len] = '\0';
		return (f_len);
	}
	return (src_len + size);
}
