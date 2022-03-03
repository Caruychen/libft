/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fmod.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchen <cchen@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 15:59:43 by cchen             #+#    #+#             */
/*   Updated: 2022/03/03 14:18:35 by cchen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_math.h"

static uint64_t	_get_diff(uint64_t *i, uint64_t *ux, uint64_t *uy)
{
	*i = *ux - *uy;
	if (*i >> 63 == 0)
	{
		if (*i == 0)
			return (0);
		*ux = *i;
	}
	return (*i);
}

static void	_normalise(uint64_t *u, int	*e)
{
	uint64_t	mantissa_tmp;

	if (!*e)
	{
		mantissa_tmp = *u << 12;
		while (mantissa_tmp >> 63 == 0)
		{
			e--;
			mantissa_tmp <<= 1;
		}
		*u <<= -(*e) + 1;
		return ;
	}
	*u &= -1ULL >> 12;
	*u |= 1ULL << 52;
}

double	ft_fmod(double x, double y)
{
	t_dcast		ux;
	t_dcast		uy;
	int			ex;
	int			ey;
	uint64_t	i;

	ux.d = x;
	uy.d = y;
	ex = ux.u >> 52 & 0x7ff;
	ey = uy.u >> 52 & 0x7ff;
	_normalise(&ux.u, &ex);
	_normalise(&uy.u, &ey);
	while (ex > ey)
	{
		if (!_get_diff(&i, &ux.u, &uy.u))
			return (i);
		ux.u <<= 1;
		ex--;
	}
	if (!_get_diff(&i, &ux.u, &uy.u))
		return (i);
	while (ux.u >> 52 == 0)
	{
		ux.u <<= 1;
		ex--;
	}
	if (ex > 0)
	{
		ux.u -= 1ULL << 52;
		ux.u |= (uint64_t) ex << 52;
	}
	else
		ux.u >>= -ex + 1;
	ux.u |= (uint64_t)(x < 0) << 63;
	return (ux.d);
}
