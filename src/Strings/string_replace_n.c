/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string_replace_n.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchen <cchen@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 16:12:02 by cchen             #+#    #+#             */
/*   Updated: 2022/09/26 16:12:02 by cchen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Strings.h"

t_string	*string_replace_n(t_string *dst, const char *src, size_t len)
{
	if (!dst || !src)
		return (NULL);
	if (len == 0)
		return (dst);
	if (!string_clear(dst))
		return (NULL);
	return (string_concat_n(dst, src, len));
}
