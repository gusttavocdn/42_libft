/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gusda-si <gusda-si@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 23:48:40 by gusda-si          #+#    #+#             */
/*   Updated: 2023/07/17 19:25:20 by gusda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

// Standard Library headers

# include <stddef.h>
# include <stdlib.h>
# include <unistd.h>

// Related headers
# include "ft_char.h"
# include "ft_math.h"
# include "ft_mem.h"
# include "ft_stdio.h"
# include "ft_strings.h"

// Constants

# define TRUE 1
# define FALSE 0
# define INT_MAX 2147483647
# define INT_MIN -2147483648
# define ULONG_MAX 18446744073709551615UL
# define NULL_BYTE 1

// Types

// My own type to represent a one byte value.
typedef unsigned char	t_byte;

#endif
