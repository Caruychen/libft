/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchen <cchen@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 10:56:47 by cchen             #+#    #+#             */
/*   Updated: 2022/01/01 23:50:01 by cchen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"

char	*ft_strcpy(char *dst, const char *src)
{
	size_t	length;

	length = ft_strlen(src);
	dst = ft_memcpy(dst, src, length + 1);
	return (dst);
}
