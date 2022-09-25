/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string_free.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caruychen <marvin@42.fr>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 14:12:54 by caruychen         #+#    #+#             */
/*   Updated: 2022/09/25 14:33:43 by caruychen        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Strings.h"
#include "ft_stdlib.h"

void	string_free(t_string *src)
{
	ft_memdel((void **)&src->memory);
	src->capacity = 0;
	src->length = 0;
}
