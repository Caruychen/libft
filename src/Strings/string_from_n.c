/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string_from_n.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caruychen <marvin@42.fr>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 14:21:24 by caruychen         #+#    #+#             */
/*   Updated: 2022/09/26 16:00:40 by cchen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Strings.h"
#include "ft_math.h"

t_string	*string_from_n(t_string *dst, const char *src, size_t len)
{
	if (!dst || !src || len == 0)
		return (NULL);
	string_new(dst, len);
	if (dst->capacity == 0)
		return (NULL);
	dst->length = ft_ulmin(len, ft_strlen(src));
	dst->memory = ft_memcpy(dst->memory, src, dst->length);
	return (dst);
}
