/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchen <cchen@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 13:45:48 by cchen             #+#    #+#             */
/*   Updated: 2022/01/03 12:24:32 by cchen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list.h"
#include <stdlib.h>

static void	ft_free_link(t_list **link)
{
	free((*link)->content);
	free(*link);
	*link = NULL;
}

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*new;

	new = f(lst);
	if (!new)
		return (NULL);
	if (lst->next)
	{
		new->next = ft_lstmap(lst->next, f);
		if (!new->next)
			ft_free_link(&new);
	}
	return (new);
}
