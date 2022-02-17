/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stdlib.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchen <cchen@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/01 23:35:07 by cchen             #+#    #+#             */
/*   Updated: 2022/02/17 17:27:15 by cchen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_STDLIB_H
# define FT_STDLIB_H

# include <stdlib.h>
# define UPPERCASE "0123456789ABCDEF"
# define MAX_LONG_SIZE 33

int		ft_atoi(const char *str);
void	*ft_memalloc(size_t size);
void	ft_memdel(void **ap);
char	*ft_strnew(size_t size);
void	ft_strdel(char **as);
char	*ft_itoa(int n);
char	*ft_ultoa(uintmax_t value, int base);
char	*ft_ltoa(intmax_t value, int base);
void	ft_memdelarray(void ***arr);
void	ft_strdelarray(char ***arr);

#endif
