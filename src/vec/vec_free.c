/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec_free.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchen <cchen@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 15:37:20 by cchen             #+#    #+#             */
/*   Updated: 2022/01/05 15:37:26 by cchen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stdlib.h"

void	vec_free(t_vec *src)
{
	ft_memdel(&src->memory);
	src->alloc_size = 0;
	src->elem_size = 0;
	src->len = 0;
}