/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   open_file.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asuc <asuc@student.42angouleme.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 16:29:09 by asuc              #+#    #+#             */
/*   Updated: 2023/08/01 10:20:00 by asuc             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int	ft_char_is_printable(char c)
{
	if (!(c >= 32 && c <= 126))
	{
		return (0);
	}
	return (1);
}

int	check_open(char *name)
{
	int	fd;

	fd = open(name, O_RDWR);
	if (fd < 0)
	{
		ft_putstr("Dict Error\n");
		return (1);
	}
	return (fd);
}

int	ft_write(char ***s1, int fd)
{
	char	*line;
	int		sz;
	int		i;
	int		count;

	i = 0;
	count = 0;
	sz = get_next_line(fd, &line);
	while (sz > 0)
	{
		(*s1)[i] = ft_real_strdup(line);
		free(line);
		sz = get_next_line(fd, &line);
		i++;
		count++;
	}
	(*s1)[i] = NULL;
	free(line);
	return (count);
}

int	open_append(char ***s1)
{
	int		fd;
	int		nb_line;

	fd = 0;
	fd = check_open("numbers.dict");
	nb_line = ft_write(s1, fd);
	close(fd);
	return (nb_line);
}
