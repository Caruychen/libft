/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string_resize.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caruychen <marvin@42.fr>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 14:45:13 by caruychen         #+#    #+#             */
/*   Updated: 2022/09/25 15:16:04 by caruychen        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Strings.h"
#include "ft_math.h"

int	string_resize(t_string *src, size_t target_len)
{
	t_string	dst;

	if (!src)
		return (-1);
	if (string_new(&dst, target_len) < 0)
		return (-1);
	string_copy(&dst, src);
	dst.length = ft_ulmin(target_len, src->length);
	string_free(src);
	*src = dst;
	return (1);
}
