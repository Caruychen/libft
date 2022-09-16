/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strspn.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchen <cchen@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 12:56:07 by cchen             #+#    #+#             */
/*   Updated: 2022/09/16 12:56:10 by cchen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"

size_t	ft_strspn(const char *s, const char *charset)
{
	size_t	len;

	len = 0;
	if (!s || !charset)
		return (len);
	while (*s && ft_strchr(charset, *s++))
		++len;
	return (len);
}
