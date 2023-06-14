/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gusda-si <gusda-si@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 00:00:14 by gusda-si          #+#    #+#             */
/*   Updated: 2023/06/14 00:00:41 by gusda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief This functions verify if a char is printable
 * @return Returns 1 if a char is printable or 0 otherwise
 */
int	ft_isprint(int c)
{
	if ((c >= 32 && c <= 126))
		return (TRUE);
	return (FALSE);
}
