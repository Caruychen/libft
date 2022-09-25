/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string_from.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caruychen <marvin@42.fr>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 14:29:16 by caruychen         #+#    #+#             */
/*   Updated: 2022/09/25 14:31:34 by caruychen        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Strings.h"

int	string_from(t_string *dst, char *src)
{
	size_t	len;

	if (!dst || !src)
		return (-1);
	len = ft_strlen(src);
	return (string_from_n(dst, src, len));
}
