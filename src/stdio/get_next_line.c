/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchen <cchen@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 11:45:43 by cchen             #+#    #+#             */
/*   Updated: 2022/01/01 14:06:34 by cchen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static void	set_buff(t_vec *buff, size_t index)
{
	if (index == buff->len)
	{
		buff->len = 0;
		return ;
	}
	buff->len = buff->len - (index + 1);
	ft_memcpy(buff->memory, (char *)buff->memory + index + 1, buff->len);
}

static int	push_line(t_vec *buff, char **line)
{
	size_t	index;

	index = 0;
	while (((char *)buff->memory)[index] != '\n' && index < buff->len)
		++index;
	*line = ft_strsub(buff->memory, 0, index);
	if (!*line)
	{
		vec_free(buff);
		return (-1);
	}
	set_buff(buff, index);
	return (1);
}

static long	result(t_vec *buff, char **line, long bytes)
{
	if (bytes < 0 || (bytes == 0 && !buff->len))
	{
		vec_free(buff);
		return (bytes);
	}
	return (push_line(buff, line));
}

static long	read_line(int fd, t_vec *buff, long *bytes)
{
	if (buff->alloc_size - buff->len < BUFF_SIZE
		&& vec_resize(buff, buff->alloc_size * RESIZE_FACTOR) == -1)
		return (*bytes = -1);
	return (*bytes = read(fd, (char *)buff->memory + buff->len, BUFF_SIZE));
}

int	get_next_line(const int fd, char **line)
{
	static t_vec	vectors[FD_MAX];
	t_vec			*buff;
	long			bytes;

	if (fd < 0 || fd >= FD_MAX || !line)
		return (-1);
	buff = &vectors[fd];
	if (!buff->memory && vec_new(buff, BUFF_SIZE, sizeof(char)) == -1)
		return (-1);
	while (read_line(fd, buff, &bytes) > 0)
	{
		buff->len += (size_t) bytes;
		if (ft_memchr((char *)buff->memory + buff->len - bytes, '\n',
				(size_t) bytes))
			break ;
	}
	return ((int) result(buff, line, bytes));
}
