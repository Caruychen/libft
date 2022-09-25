/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string_push.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caruychen <marvin@42.fr>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 15:06:55 by caruychen         #+#    #+#             */
/*   Updated: 2022/09/25 16:20:27 by caruychen        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Strings.h"

t_string	*string_push(t_string *dst, char c)
{
	if (!dst || c == '\0')
		return (NULL);
	if (!dst->memory && !string_new(dst, 1))
		return (NULL);
	if (dst->length >= dst->capacity - 1)
		if (!string_resize(dst, dst->capacity * STR_RESIZE_FACTOR))
			return (NULL);
	ft_memcpy(&dst->memory[dst->length++], &c, 1);
	return (dst);
}
