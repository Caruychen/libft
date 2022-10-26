/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string_append.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caruychen <marvin@42.fr>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 17:16:31 by caruychen         #+#    #+#             */
/*   Updated: 2022/10/26 10:53:41 by caruychen        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Strings.h"

t_string	*string_append(t_string *dst, t_string *src)
{
	size_t	new_len;

	if (!dst || !src || !src->memory)
		return (NULL);
	if (!dst->memory)
		return (string_from_n(dst, src->memory, src->length));
	new_len = dst->length + src->length;
	if (new_len > dst->capacity - 1)
	{
		if (new_len <= (dst->capacity * STR_RESIZE_FACTOR - 1))
			new_len = dst->capacity * STR_RESIZE_FACTOR - 1;
		if (!string_resize(dst, new_len))
			return (NULL);
	}
	ft_memcpy((dst->memory + dst->length), src->memory, src->length);
	dst->length += src->length;
	return (dst);
}
