/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string_copy.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caruychen <marvin@42.fr>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 14:34:21 by caruychen         #+#    #+#             */
/*   Updated: 2022/09/25 16:16:45 by caruychen        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Strings.h"
#include "ft_math.h"

t_string	*string_copy(t_string *dst, t_string *src)
{
	size_t	length;

	if (!dst || !src)
		return (NULL);
	length = ft_ulmin(dst->capacity - 1, src->length);
	ft_memcpy(dst->memory, src->memory, length);
	return (dst);
}
