/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string_concat_n.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchen <cchen@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 15:49:26 by cchen             #+#    #+#             */
/*   Updated: 2022/09/28 17:13:58 by caruychen        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Strings.h"

t_string	*string_concat_n(t_string *dst, const char *src, size_t len)
{
	size_t	new_len;

	if (!dst || !src)
		return (NULL);
	if (len == 0)
		return (dst);
	if (!dst->memory)
		return (string_from_n(dst, src, len));
	new_len = dst->length + len;
	if (new_len > dst->capacity - 1)
	{
		if (new_len <= (dst->capacity * STR_RESIZE_FACTOR - 1))
			new_len = dst->capacity * STR_RESIZE_FACTOR - 1;
		if (!string_resize(dst, new_len))
			return (NULL);
	}
	ft_memcpy((dst->memory + dst->length), src, len);
	dst->length = new_len;
	return (dst);
}
