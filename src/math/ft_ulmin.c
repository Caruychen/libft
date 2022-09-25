/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ulmin.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caruychen <marvin@42.fr>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 15:00:12 by caruychen         #+#    #+#             */
/*   Updated: 2022/09/25 15:00:35 by caruychen        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned long	ft_ulmin(const unsigned long n1, const unsigned long n2)
{
	if (n1 < n2)
		return (n1);
	return (n2);
}
