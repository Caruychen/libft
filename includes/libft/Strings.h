/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Strings.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caruychen <marvin@42.fr>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 13:27:30 by caruychen         #+#    #+#             */
/*   Updated: 2022/09/25 17:28:23 by caruychen        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STRINGS_H
# define STRINGS_H

# include "ft_string.h"
# define STR_RESIZE_FACTOR 2

typedef struct s_string
{
	char			*memory;
	size_t			capacity;
	size_t			length;
}		t_string;

t_string	*string_new(t_string *dst, size_t capacity);
void		string_free(t_string *src);
t_string	*string_from(t_string *dst, const char *src);
t_string	*string_from_n(t_string *dst, const char *src, size_t len);
t_string	*string_copy(t_string *dst, t_string *src);
t_string	*string_resize(t_string *src, size_t target_size);
t_string	*string_push(t_string *dst, char c);
char		string_pop(t_string *str);
t_string	*string_concat(t_string *dst, const char *src);
t_string	*string_append(t_string *dst, t_string *src);
t_string	*string_clear(t_string *str);

#endif
