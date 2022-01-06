/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_vecfrom.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchen <cchen@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 15:59:20 by cchen             #+#    #+#             */
/*   Updated: 2022/01/06 14:16:37 by cchen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "testft.h"

int	test_vecfrom(void)
{
	t_vec   t1;
	int	base[] = {1, 2, 3, 4, 5};
	
	assert(vec_from(&t1, base, 5, sizeof(int)) > 0);
	assert(memcmp(t1.memory, base, sizeof(base)) == 0);
	vec_free(&t1);
	return (0);
}

