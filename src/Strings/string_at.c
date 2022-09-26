/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string_at.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchen <cchen@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 14:58:23 by cchen             #+#    #+#             */
/*   Updated: 2022/09/26 14:58:24 by cchen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Strings.h"

char	*string_at(t_string *str, size_t index)
{
	if (!str || !str->memory || index >= str->length)
		return (NULL);
	return (str->memory + index);
}
