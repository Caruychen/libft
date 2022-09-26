/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string_replace.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchen <cchen@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 16:11:53 by cchen             #+#    #+#             */
/*   Updated: 2022/09/26 16:11:55 by cchen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Strings.h"

t_string	*string_replace(t_string *dst, const char *src)
{
	if (!dst || !src)
		return (NULL);
	if (!string_clear(dst))
		return (NULL);
	return (string_concat(dst, src));
}
