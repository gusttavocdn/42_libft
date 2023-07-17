/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gusda-si <gusda-si@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 20:22:13 by gusda-si          #+#    #+#             */
/*   Updated: 2023/06/22 13:37:58 by gusda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_strlen_custom(const char *s, char c);
static char		*ft_create_word(const char *s, char c);
static size_t	ft_count_words(const char *s, char c);
static size_t	ft_walk_through_delimiters(const char *s, char c);

char	**ft_split(char const *s, char c)
{
	size_t	current_word;
	char	**str_arr;
	size_t	words_qnt;

	words_qnt = ft_count_words(s, c);
	str_arr = (char **)ft_calloc(words_qnt + 1, sizeof(char *));
	if (!str_arr)
		return (NULL);
	if (words_qnt == 0)
		return (str_arr);
	current_word = 0;
	while (current_word < words_qnt)
	{
		s += ft_walk_through_delimiters(s, c);
		str_arr[current_word] = ft_create_word(s, c);
		s += ft_strlen(str_arr[current_word]);
		current_word++;
	}
	return (str_arr);
}

static size_t	ft_count_words(const char *s, char c)
{
	size_t	counter;
	int		is_new_word;

	counter = 0;
	is_new_word = FALSE;
	while (*s != '\0')
	{
		if (*s != (unsigned char)c && !is_new_word)
		{
			is_new_word = TRUE;
			counter++;
		}
		if (*s == (unsigned char)c)
			is_new_word = FALSE;
		s++;
	}
	return (counter);
}

static char	*ft_create_word(const char *s, char c)
{
	char	*new_str;
	size_t	str_len;
	size_t	i;

	str_len = ft_strlen_custom(s, c);
	new_str = (char *)ft_calloc(str_len + NULL_BYTE, sizeof(char));
	i = 0;
	while (i < str_len)
	{
		new_str[i] = s[i];
		i++;
	}
	new_str[i] = '\0';
	return (new_str);
}

static size_t	ft_strlen_custom(const char *s, char c)
{
	char	*str_begin;

	while (*s == c)
		s++;
	str_begin = (char *)s;
	while (*s != '\0' && *s != (unsigned char)c)
		s++;
	return ((s - str_begin));
}

static size_t	ft_walk_through_delimiters(const char *s, char c)
{
	size_t	walked_bytes;

	walked_bytes = 0;
	while (*s == (unsigned char)c)
	{
		walked_bytes++;
		s++;
	}
	return (walked_bytes);
}
