/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_veccopy.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchen <cchen@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 16:43:01 by cchen             #+#    #+#             */
/*   Updated: 2022/01/06 14:16:07 by cchen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "testft.h"

static int	get_min(int n1, int n2)
{
	return (n1 < n2 ? n1 : n2);
}

int	run_asserts(int dst_len)
{
	t_vec	t1;
	t_vec	t2;
	int	base[] = {1, 2, 3, 4, 5};

	assert(vec_from(&t1, base, 5, sizeof(int)) > 0);
	assert(vec_new(&t2, dst_len, sizeof(int)) > 0);
	assert(t2.alloc_size == dst_len * sizeof(int));
	assert(vec_copy(&t2, &t1) > 0);
	assert(memcmp(t2.memory, base, sizeof(int) * get_min(dst_len, 5)) == 0);
	vec_free(&t1);
	vec_free(&t2);
	return (0);
}

int	test_veccopy(void)
{
	run_asserts(1);
	run_asserts(4);
	run_asserts(5);
	run_asserts(6);
	run_asserts(10);
	return (0);
}
