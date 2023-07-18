/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_math.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gusda-si <gusda-si@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 19:00:04 by gusda-si          #+#    #+#             */
/*   Updated: 2023/07/18 11:59:30 by gusda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_MATH_H
# define FT_MATH_H

// Standard Library headers
//# include <stdio.h>
//# include <unistd.h>

// Related headers
//# include "libft.h"

// Function declarations

/**
 * @brief This function converts a string in a number that
 * can be stored in a int variable.
 */
int		ft_atoi(const char *s);

/**
 * @brief This functions returns a string representing the integer received
 * as argument. Negative numbers are handled.
 *
 * @param n The integer to convert
 * @return The string representing the integer. NULL if malloc fails.
 */
char	*ft_itoa(int n);

#endif // FT_MATH_H
