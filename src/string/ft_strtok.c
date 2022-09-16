/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtok.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchen <cchen@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 17:22:33 by cchen             #+#    #+#             */
/*   Updated: 2022/09/16 23:36:45 by caruychen        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"

char	*ft_strtok(char *str, const char *delim)
{
	static char	*last;
	char		*token;

	if (!delim)
		return (NULL);
	if (!str)
		str = last;
	if (!str)
		return (NULL);
	str += ft_strspn(str, delim);
	if (*str == '\0')
		return (last = NULL, NULL);
	token = str;
	str = ft_strpbrk(token, delim);
	if (!str)
		*str++ = '\0';
	last = str;
	return (token);
}
