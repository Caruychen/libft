/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string_concat_n.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchen <cchen@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 15:49:26 by cchen             #+#    #+#             */
/*   Updated: 2022/09/26 15:49:28 by cchen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Strings.h"

t_string	*string_concat_n(t_string *dst, const char *src, size_t len)
{
	size_t	src_len;
	size_t	new_len;

	if (!dst || !src)
		return (NULL);
	if (!dst->memory)
		return (string_from_n(dst, src, len));
	src_len = ft_strlen(src);
	src_len = src_len * (src_len <= len) + len * !(src_len <= len);
	new_len = dst->length + src_len;
	if (new_len > dst->capacity - 1)
	{
		if (new_len <= (dst->capacity * STR_RESIZE_FACTOR - 1))
			new_len = dst->capacity * STR_RESIZE_FACTOR - 1;
		if (!string_resize(dst, new_len))
			return (NULL);
	}
	ft_memcpy((dst->memory + dst->length), src, src_len);
	return (dst);
}
