/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtok.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchen <cchen@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 17:22:33 by cchen             #+#    #+#             */
/*   Updated: 2022/09/16 17:22:36 by cchen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"

char	*ft_strtok(char *str, const char *delim)
{
	static char	*last;

	if (!delim)
		return (NULL);
	if (!str && !last)
		return (NULL);
	if (!str)
		str = last;
}
