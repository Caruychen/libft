/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_uitoa.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchen <cchen@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 10:05:46 by cchen             #+#    #+#             */
/*   Updated: 2022/02/18 10:08:16 by cchen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdint.h>
#include "ft_stdlib.h"

char	*ft_uitoa(unsigned int value, int base)
{
	if (base < 2 || base > 16)
		return (NULL);
	return (ft_ultoa((uintmax_t)value, base));
}
