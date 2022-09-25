/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Strings.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caruychen <marvin@42.fr>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 13:27:30 by caruychen         #+#    #+#             */
/*   Updated: 2022/09/25 14:09:58 by caruychen        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STRINGS_H
# define STRINGS_H

# include "ft_string.h"
# define STRING_RESIZE_FACTOR 2

typedef struct s_string
{
	char			*memory;
	size_t			capacity;
	size_t			length;
}		t_string;

int		string_new(t_string *dst, size_t capacity);
void	string_free(t_string *src);
int		string_from(t_string *dst, char *src);
int		string_from_n(t_string *dst, char *src, size_t len);
int		string_copy(t_string *dst, t_string *src);
int		string_resize(t_string *src, size_t target_size);
int		string_push(t_string *dst, void *src);
char		string_pop(t_string *str);

#endif