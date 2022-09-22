/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_charn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchen <cchen@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 11:42:39 by cchen             #+#    #+#             */
/*   Updated: 2022/09/22 11:42:41 by cchen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_count_charn(const char *str, char c, size_t n)
{
	size_t	count;

	count = 0;
	while (*str && n > 0)
	{
		if (*str == c)
			count++;
		str++;
		n--;
	}
	return (count);
}
