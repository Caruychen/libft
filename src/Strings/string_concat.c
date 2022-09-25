/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string_concat.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caruychen <marvin@42.fr>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 15:39:40 by caruychen         #+#    #+#             */
/*   Updated: 2022/09/25 16:09:47 by caruychen        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Strings.h"

int	string_concat(t_string *dst, const char *src)
{
	size_t	src_len;
	size_t	new_len;

	if (!dst || !src)
		return (-1);
	if (!dst->memory)
		return (string_from(dst, src));
	src_len = ft_strlen(src);
	new_len = dst->length + src_len;
	if (new_len > dst->capacity - 1)
	{
		if (new_len <= (dst->capacity * STR_RESIZE_FACTOR - 1))
			new_len = dst->capacity * STR_RESIZE_FACTOR - 1;
		if (string_resize(dst, new_len) < 0)
			return (-1);
	}
	ft_memcpy((dst->memory + dst->length), src, src_len);
	return (1);
}
