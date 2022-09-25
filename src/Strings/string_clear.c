/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string_clear.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caruychen <marvin@42.fr>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 17:28:01 by caruychen         #+#    #+#             */
/*   Updated: 2022/09/25 17:33:42 by caruychen        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Strings.h"

t_string	*string_clear(t_string *str)
{
	if (!str || !str->memory)
		return (NULL);
	ft_bzero(str->memory, str->capacity);
	str->length = 0;
	return (str);
}
