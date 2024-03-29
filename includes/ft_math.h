/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_math.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gusda-si <gusda-si@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 19:00:04 by gusda-si          #+#    #+#             */
/*   Updated: 2023/07/29 22:34:33 by gusda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_MATH_H
# define FT_MATH_H

// Standard Library headers
//# includes <stdio.h>
//# includes <unistd.h>

// Related headers
//# includes "libft.h"

// Function declarations

/**
 * @brief This function converts a string in a number that
 * can be stored in a int variable.
 */
int ft_atoi(const char *s);

/**
 * @brief This functions returns a string representing the integer received
 * as argument. Negative numbers are handled.
 *
 * @param n The integer to convert
 * @return The string representing the integer. NULL if malloc fails.
 */
char *ft_itoa(int n);

/**
 * @brief This function converts a string in a number that
 * can be stored in a int variable.
 * @param str The string to be converted.
 * @param base The base where the string representing a number
 * is written.
 * @return The number converted. If the base is invalid,
 * the function returns 0.
*/
int ft_atoi_base(char *str, char *base);

/**
 * @brief This function converts a number in a string
 * that represents the number in the given base.
 * @param number The number to be converted.
 * @param base  the base
 * @return A pointer allocated with malloc to a string
 * address representing the number in the given base.
*/
char *ft_itoa_base(long int number, char *base);

/**
 * @brief this function calculates how many digits is necessary
 * to represent a number in a given base.
 * @param number the number
 * @param base_len the base length
*/
int ft_calc_nbr_digits(long int number, int base_len);

/**
 * @brief This function converts a string in a base to another base.
 * @param nbr The string to be converted.
 * @param base_from The initial base.
 * @param base_to The base to be converted.
 * @return A pointer allocated with malloc to a string
 * address represeting the number in the given base.
*/
char *ft_convert_base(char *nbr, char *base_from, char *base_to);

/**
 * @brief This function returns the absolute value of a number.
 * @param number The number to be converted.
 * @return The absolute value of the number.
*/
int ft_abs(int number);

/**
 * @brief This function converts a number in a string
 * @param number The number to be converted.
 * @param base the base
 * @return A pointer allocated with malloc to a string
 */
char *ft_itoa_base_u(unsigned long number, char *base);

#endif // FT_MATH_H
