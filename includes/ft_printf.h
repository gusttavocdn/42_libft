/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gusda-si <gusda-si@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 12:10:32 by gusda-si          #+#    #+#             */
/*   Updated: 2023/12/10 22:30:27 by gusda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
#define FT_PRINTF_H

// Related headers
#include <stdarg.h>
#include <stdbool.h>
#include <unistd.h>

#define HEX_LOWER "0123456789abcdef"
#define HEX_UPPER "0123456789ABCDEF"

// Enum declarations
typedef enum e_specifiers
{
	c = 'c',
	s = 's',
	p = 'p',
	i = 'i',
	u = 'u',
	x = 'x',
	X = 'X',
	d = 'd',
	percent = '%',
} t_specifiers;

// Macro declarations
#define FLAGS "-0.#+ "
#define SPECIFIERS "cspdiuxX%"

// Struct declarations
typedef struct s_flags
{
	bool has_hash;
	bool has_zero;
	bool has_space;
	bool has_plus;
	bool has_minus;
	t_specifiers specifier;
	int width;
	int precision;
} t_flags;

// Function declarations
/**
 * @brief This function can write a formatted string to the standard output.
 * For more info consult the manual (man 3 printf)
 */
int ft_printf(const char *format, ...);
int handle_just_specifier(char specifier, va_list args);
int handle_flags(const char *str, va_list args,
				 int *walked_bytes);
bool is_specifier(char flag);
bool is_flag(char flag);
int apply_prefix(t_flags *flags, char *format);
int apply_width(t_flags *flags, char *number,
				char padding_char);
char *get_argument(t_specifiers specifier, va_list args);
void init_flags(t_flags *flags);

#endif // FT_PRINTF_H
