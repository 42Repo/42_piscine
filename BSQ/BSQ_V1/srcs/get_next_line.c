/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asuc <asuc@student.42angouleme.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 11:10:04 by asuc              #+#    #+#             */
/*   Updated: 2023/08/02 18:36:16 by asuc             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int	get_next_line(int fd, char **line)
{
	int		ret;
	char	*tmp;
	char	*tmp2;

	tmp2 = NULL;
	tmp = malloc(sizeof(char) * 1);
	init_char_tab(1, &tmp);
	ret = get_next_line_loop(fd, &tmp, &tmp2);
	tmp[ft_strlen(tmp)] = '\0';
	*line = malloc(sizeof(char) * (ft_strlen(tmp) + 2));
	if (*line == NULL)
	{
			 
			return (-1);
	}
	*line = ft_strdup(tmp);
	free(tmp);
	return (ret);
}

int	get_next_line_loop(int fd, char **tmp, char **tmp2)
{
	int		ret;
	char	buf[1];
	int		i;

	i = 0;
	ret = read(fd, buf, 1);
	while (ret > 0 && buf[0] != '\n')
	{
		(*tmp2) = malloc(sizeof(char) * (i + 2));
		if ((*tmp2) == NULL)
		{
			 
			return (-1);
		}
		init_char_tab(i + 2, tmp2);
		ft_strcat((*tmp2), *tmp);
		(*tmp2)[i] = buf[0];
		(*tmp2)[i + 1] = '\0';
		free(*tmp);
		(*tmp) = 0;
		*tmp = malloc(sizeof(char) * (i + 2));
		if (*tmp == NULL)
		{
			 
			return (-1);
		}
		init_char_tab(i + 2, tmp);
		ft_strcat(*tmp, (*tmp2));
		free(*tmp2);
		(*tmp2) = 0;
		ret = read(fd, buf, 1);
		i++;
	}
	return (ret);
}

void	init_char_tab(int len, char **tab)
{
	int i;

	i = 0;
	while(i < len)
	{
		(*tab)[i] = 0;
		i++;
	}
}