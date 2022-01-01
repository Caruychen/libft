/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchen <cchen@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 21:35:37 by cchen             #+#    #+#             */
/*   Updated: 2022/01/01 23:59:10 by cchen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"

static int	is_whitespace(char c)
{
	return (c == ' ' || c == '\n' || c == '\t');
}

static char	*seek_end(char const *s)
{
	char	*end;

	end = (char *)s;
	while (*s)
	{
		if (!is_whitespace(*s))
			end = (char *)s;
		++s;
	}
	return (end);
}

static size_t	get_length(char const *s)
{
	size_t	length;

	if (!*s)
		return (0);
	length = seek_end(s) - s + 1;
	return (length);
}

char	*ft_strtrim(char const *s)
{
	size_t	length;

	while (is_whitespace(*s))
		++s;
	length = get_length(s);
	return (ft_strsub(s, 0, length));
}
