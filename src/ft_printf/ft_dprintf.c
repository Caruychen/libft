/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dprintf.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caruychen <marvin@42.fr>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 16:35:28 by caruychen         #+#    #+#             */
/*   Updated: 2022/09/28 16:36:46 by caruychen        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <unistd.h>
#include <stdlib.h>

int	ft_dprintf(int fildes, const char *format, ...)
{
	va_list	ap;
	char	*ret;
	int		len;

	va_start(ap, format);
	len = ft_vasprintf(&ret, format, ap);
	va_end(ap);
	if (len == -1)
		return (len);
	write(fildes, ret, len);
	free(ret);
	return (len);
}
