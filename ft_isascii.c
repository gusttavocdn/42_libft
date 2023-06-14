/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gusda-si <gusda-si@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 23:59:38 by gusda-si          #+#    #+#             */
/*   Updated: 2023/06/14 00:00:05 by gusda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief This functions verify if a char is ascii
 * @return Returns 1 if a char is ascii or 0 otherwise
 */
int	ft_isascii(int c)
{
	if ((c >= 0 && c <= 127))
		return (TRUE);
	return (FALSE);
}
