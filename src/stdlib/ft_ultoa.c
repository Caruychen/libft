/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultoa.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchen <cchen@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 16:31:14 by cchen             #+#    #+#             */
/*   Updated: 2022/02/17 17:09:51 by cchen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdint.h>
#include "ft_string.h"
#include "ft_stdlib.h"

char	*ft_ultoa(uintmax_t value, int base)
{
	char	tmp[MAX_LONG_SIZE];
	char	*res;
	int		index;

	if (base < 2 || base > 16)
		return (NULL);
	index = MAX_LONG_SIZE - 1;
	tmp[index--] = '\0';
	while (value > 0)
	{
		tmp[index--] = UPPERCASE[value % base];
		value /= base;
	}
	if (index == MAX_LONG_SIZE - 2)
		tmp[index] = '0';
	res = (char *)malloc(MAX_LONG_SIZE - index);
	if (!res)
		return (NULL);
	return (ft_memcpy(res, &tmp[index + 1], MAX_LONG_SIZE - index + 1));
}
