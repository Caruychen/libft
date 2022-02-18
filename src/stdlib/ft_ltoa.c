/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ltoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchen <cchen@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 17:11:10 by cchen             #+#    #+#             */
/*   Updated: 2022/02/18 10:23:21 by cchen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdint.h>
#include "ft_string.h"
#include "ft_stdlib.h"

static	int	set_sign(intmax_t *value)
{
	int	sign;

	sign = 1;
	if (*value < 0)
	{
		sign = -1;
		*value *= -1;
	}
	return (sign);
}

char	*ft_ltoa(intmax_t value, int base)
{
	char	tmp[MAX_LL_STR_SIZE];
	char	*res;
	int		index;
	int		sign;

	if (base < 2 || base > 16)
		return (NULL);
	sign = set_sign(&value);
	index = MAX_LL_STR_SIZE - 1;
	tmp[index--] = '\0';
	while (value > 0)
	{
		tmp[index--] = HEX_CONV_STR[value % base];
		value /= base;
	}
	if (sign == -1 && base == 10)
		tmp[index--] = '-';
	if (index == MAX_LL_STR_SIZE - 2)
		tmp[index] = '0';
	res = (char *)malloc(MAX_LL_STR_SIZE - index);
	if (!res)
		return (NULL);
	return (ft_memcpy(res, &tmp[index + 1], MAX_LL_STR_SIZE - index + 1));
}
