/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string_push.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caruychen <marvin@42.fr>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 15:06:55 by caruychen         #+#    #+#             */
/*   Updated: 2022/09/25 15:27:18 by caruychen        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Strings.h"

int	string_push(t_string *dst, char c)
{
	if (!dst || c == '\0')
		return (-1);
	if (!dst->memory)
		string_new(dst, 1);
	if (dst->length >= dst->capacity - 1)
		if (string_resize(dst, dst->capacity * STR_RESIZE_FACTOR) < 0)
			return (-1);
	ft_memcpy(&dst->memory[dst->length++], &c, 1);
	return (1);
}
