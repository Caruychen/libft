/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string_resize.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caruychen <marvin@42.fr>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 14:45:13 by caruychen         #+#    #+#             */
/*   Updated: 2022/09/25 16:21:28 by caruychen        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Strings.h"
#include "ft_math.h"

t_string	*string_resize(t_string *src, size_t target_len)
{
	t_string	dst;

	if (!src || !string_new(&dst, target_len))
		return (NULL);
	string_copy(&dst, src);
	dst.length = ft_ulmin(target_len, src->length);
	string_free(src);
	*src = dst;
	return (src);
}
