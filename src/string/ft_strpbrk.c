/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strpbrk.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchen <cchen@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 17:12:23 by cchen             #+#    #+#             */
/*   Updated: 2022/09/16 17:16:04 by cchen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"

char	*ft_strpbrk(const char *s, const char *charset)
{
	if (!s || !charset)
		return (NULL);
	while (*s)
	{
		if (ft_strchr(charset, *s))
			return ((char *)s);
		++s;
	}
	return (NULL);
}
