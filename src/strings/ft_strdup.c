/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gusda-si <gusda-si@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 12:48:43 by gusda-si          #+#    #+#             */
/*   Updated: 2023/06/18 13:00:42 by gusda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*new_str;
	size_t	size;

	size = ft_strlen(s);
	new_str = (char *)ft_calloc(size + NULL_BYTE, sizeof(char));
	if (new_str == NULL)
		return (NULL);
	while (*s != '\0')
		*new_str++ = *s++;
	*new_str = '\0';
	return ((new_str - size));
}
