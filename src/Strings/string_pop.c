/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string_pop.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caruychen <marvin@42.fr>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 15:15:16 by caruychen         #+#    #+#             */
/*   Updated: 2022/09/25 15:23:10 by caruychen        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Strings.h"

char	string_pop(t_string *str)
{
	char	c;

	if (!str || !str->memory || !str->length)
		return (0);
	c = str->memory[--str->length];
	str->memory[str->length] = 0;
	return (c);
}
