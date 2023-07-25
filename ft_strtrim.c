/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gusda-si <gusda-si@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 23:11:49 by gusda-si          #+#    #+#             */
/*   Updated: 2023/07/25 15:50:00 by gusda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_is_on_set(int c, char const *set);

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	char	*new_str;

	if (!set || !s1)
		return (NULL);
	start = 0;
	end = ft_strlen(s1) - NULL_BYTE;
	while (ft_is_on_set(s1[end], set) && end)
		end--;
	while (ft_is_on_set(s1[start], set))
		start++;
	new_str = ft_substr(s1, start, end - start + 1);
	if (!new_str)
		return (NULL);
	return (new_str);
}

static int	ft_is_on_set(int c, char const *set)
{
	while (*set != '\0')
	{
		if ((unsigned char)c == *set)
			return (TRUE);
		set++;
	}
	return (FALSE);
}
