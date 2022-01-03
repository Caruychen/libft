/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vecresize.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchen <cchen@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/21 11:06:39 by cchen             #+#    #+#             */
/*   Updated: 2022/01/03 12:19:55 by cchen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vec.h"
#include "ft_math.h"

int	ft_vecresize(t_vec *src, size_t target_size)
{
	t_vec	dst;
	size_t	target_len;

	if (!src)
		return (-1);
	target_len = target_size / src->elem_size;
	if (ft_vecnew(&dst, target_len, src->elem_size) < 0)
		return (-1);
	ft_veccopy(&dst, src);
	dst.len = ft_imin(target_len, src->len);
	ft_vecfree(src);
	*src = dst;
	return (target_size);
}
