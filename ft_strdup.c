/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gusda-si <gusda-si@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 00:38:08 by gusda-si          #+#    #+#             */
/*   Updated: 2023/06/14 01:49:19 by gusda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	i;
	char	*new_string;

	new_string = (char *)malloc(ft_strlen(s) + sizeof(char));
	if (new_string == NULL)
		return (NULL);
	i = 0;
	while (*(s + i) != '\0')
	{
		*(new_string + i) = *(s + i);
		i++;
	}
	*(new_string + i) = '\0';
	return (new_string);
}
