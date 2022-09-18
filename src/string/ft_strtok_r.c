/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtok_r.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caruychen <cchen@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 08:45:32 by caruychen         #+#    #+#             */
/*   Updated: 2022/09/18 09:33:50 by caruychen        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"

char	*ft_strtok_r(char *str, const char *delim, char **lasts)
{
	char	*token;

	if (!delim)
		return (NULL);
	if (!str)
		str = *lasts;
	if (!str)
		return (NULL);
	str += ft_strspn(str, delim);
	if (*str == '\0')
		return (*lasts = NULL, NULL);
	token = str;
	str = ft_strpbrk(token, delim);
	if (str)
		*str++ = '\0';
	*lasts = str;
	return (token);
}
