/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string_from_n.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caruychen <marvin@42.fr>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 14:21:24 by caruychen         #+#    #+#             */
/*   Updated: 2022/09/25 15:38:45 by caruychen        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Strings.h"

int	string_from_n(t_string *dst, const char *src, size_t len)
{
	if (!dst || !src || len == 0)
		return (-1);
	string_new(dst, len);
	if (dst->capacity == 0)
		return (-1);
	dst->length = len;
	dst->memory = ft_memcpy(dst->memory, src, len);
	return (1);
}
