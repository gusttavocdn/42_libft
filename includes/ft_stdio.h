/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stdio.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gusda-si <gusda-si@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 19:00:04 by gusda-si          #+#    #+#             */
/*   Updated: 2023/07/17 19:17:59 by gusda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_STDIO_H
# define FT_STDIO_H

// Standard Library headers
# include <unistd.h>

// Function declarations

/**
 * @brief Outputs the char "c" to the given file descriptor
 *
 * @param c The char to output
 * @param fd the file descriptor on which to write
 */
void	ft_putchar_fd(char c, int fd);

/**
 * @brief Outputs the string "s" to the given file descriptor
 *
 * @param s The string to output
 * @param fd The file descriptor on which to write
 */
void	ft_putstr_fd(char *s, int fd);

/**
 * @brief Outputs the string "s" to the given file descriptor
 * followed by a newline.
 *
 * @param s The string to output
 * @param fd The file descriptor on which to write
 */
void	ft_putendl_fd(char *s, int fd);

/**
 * @brief Outputs the integer "n" to the given fd
 *
 * @param n The integer to output
 * @param fd The file descriptor on which to write
 */
void	ft_putnbr_fd(int n, int fd);

#endif // FT_STDIO_H
