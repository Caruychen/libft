/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchen <cchen@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 14:11:46 by cchen             #+#    #+#             */
/*   Updated: 2022/03/14 16:02:05 by cchen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"

int	_parse(t_vec *result, const char *format, t_specs specs)
{
	const char	*p;

	p = format;
	while (*p)
	{
		if (*p++ == '%')
		{
			if (!*p)
				return (vec_push(result, "\0"));
			if (vec_append_strn(result, format, (p - 1) - format) < 0)
				return (-1);
			reset_specs(&specs);
			_parse_flags(&p, &specs);
			_parse_width(&p, &specs);
			_parse_precision(&p, &specs);
			_parse_length(&p, &specs);
			if (_parse_conversion(result, &p, &specs) < 0)
				return (-1);
			format = p;
		}
	}
	return (vec_append_strn(result, format, p + 1 - format));
}
