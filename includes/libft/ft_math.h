/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_math.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchen <cchen@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/01 23:40:35 by cchen             #+#    #+#             */
/*   Updated: 2022/03/03 14:27:09 by cchen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_MATH_H
# define FT_MATH_H

# include <stdint.h>

typedef union s_dcast
{
	double		d;
	uint64_t	u;
}			t_dcast;

int		ft_imin(const int n1, const int n2);
int		ft_sqrt(int nb);
double	ft_fmod(double x, double y);

#endif
