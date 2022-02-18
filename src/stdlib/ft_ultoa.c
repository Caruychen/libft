/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultoa.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchen <cchen@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 16:31:14 by cchen             #+#    #+#             */
/*   Updated: 2022/02/18 10:48:03 by cchen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdint.h>
#include "ft_string.h"
#include "ft_stdlib.h"

char	*ft_ultoa(uintmax_t value, int base)
{
	char	tmp[MAX_LL_STR_SIZE];
	char	*res;
	int		index;

	if (base < 2 || base > 16)
		return (NULL);
	index = MAX_LL_STR_SIZE - 1;
	tmp[index--] = '\0';
	while (value > 0)
	{
		tmp[index--] = HEX_CONV_STR[value % base];
		value /= base;
	}
	if (index == MAX_LL_STR_SIZE - 2)
		tmp[index--] = '0';
	res = (char *)malloc(MAX_LL_STR_SIZE - index + 1);
	if (!res)
		return (NULL);
	return (ft_memcpy(res, &tmp[index + 1], MAX_LL_STR_SIZE - index + 1));
}
