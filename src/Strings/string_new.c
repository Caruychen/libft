/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string_new.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caruychen <marvin@42.fr>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 14:02:47 by caruychen         #+#    #+#             */
/*   Updated: 2022/09/25 14:11:13 by caruychen        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Strings.h"
#include "ft_stdlib.h"

int	string_new(t_string *dst, size_t capacity)
{
	if (!dst || capacity == 0)
		return (-1);
	dst->capacity = (capacity + 1) * sizeof(char);
	dst->length = 0;
	dst->memory = (char *) ft_memalloc(dst->capacity);
	if (!dst->memory)
		return (dst->capacity = 0, -1);
	return (dst->capacity);
}
