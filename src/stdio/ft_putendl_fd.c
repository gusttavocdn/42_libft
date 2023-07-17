/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gusda-si <gusda-si@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 21:40:14 by gusda-si          #+#    #+#             */
/*   Updated: 2023/07/17 19:18:40 by gusda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/ft_stdio.h"

void	ft_putendl_fd(char *s, int fd)
{
	size_t	str_len;

	str_len = ft_strlen(s);
	write(fd, s, str_len);
	write(fd, "\n", 1);
}
