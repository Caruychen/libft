/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memdelarray.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchen <cchen@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 09:17:13 by cchen             #+#    #+#             */
/*   Updated: 2022/01/01 23:32:06 by cchen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_stdio.h"

void	ft_memdelarray(void ***arr)
{
	void	**temp;

	temp = *arr;
	while (*temp)
		ft_memdel(temp++);
	free(*arr);
	*arr = NULL;
}
