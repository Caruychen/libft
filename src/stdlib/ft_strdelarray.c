/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdelarray.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchen <cchen@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 09:18:19 by cchen             #+#    #+#             */
/*   Updated: 2022/01/01 23:33:01 by cchen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stdlib.h>

void	ft_strdelarray(char ***arr)
{
	char	**temp;

	temp = *arr;
	while (*temp)
		ft_strdel(temp++);
	free(*arr);
	*arr = NULL;
}
