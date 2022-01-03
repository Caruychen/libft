/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vecfrom.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchen <cchen@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 16:04:59 by cchen             #+#    #+#             */
/*   Updated: 2022/01/03 12:18:47 by cchen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vec.h"
#include "ft_string.h"

int	ft_vecfrom(t_vec *dst, void *src, size_t len, size_t elem_size)
{
	if (!dst || !src || len == 0 || elem_size == 0)
		return (-1);
	ft_vecnew(dst, len, elem_size);
	if (dst->alloc_size == 0)
		return (-1);
	dst->len = len;
	dst->memory = ft_memcpy(dst->memory, src, dst->alloc_size);
	return (dst->alloc_size);
}
