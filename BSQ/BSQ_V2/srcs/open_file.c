/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   open_file.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asuc <asuc@student.42angouleme.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 14:59:37 by asuc              #+#    #+#             */
/*   Updated: 2023/08/02 16:48:11 by asuc             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft.h"

int	check_in_tab(char **tab_check, t_param_tab param_tab, char **tab)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	(*tab_check)[0] = (*tab_check)[1];
	(*tab_check)[1] = (*tab_check)[2];
	(*tab_check)[2] = '\0';
	while (i < param_tab.length)
	{
		while (tab[i][j])
		{
			if (i >= param_tab.length || j >= param_tab.width
				|| ft_is_already(tab[i][j], tab_check) != -1)
				return (-1);
			j++;
		}
		if (j < param_tab.width)
			return (-1);
		j = 0;
		i++;
	}
	return (0);
}

int	open_file(char *file_name, t_param_tab *param_tab, char	***tab)
{
	int		fd;
	char	*line;
	int		end;
	char	*tab_check;

	end = 0;
	tab_check = malloc(sizeof(char) * 3);
	while (end < 3)
	{
		tab_check[end] = 0;
		end++;
	}
	end = 1;
	fd = open(file_name, O_RDWR);
	if (fd == -1)
		ft_putstr("Erreur de fichier\n");
	if (fd == -1)
		return (0);
	end = get_next_line(fd, &line);
	if (ft_strlen(line) < 4
		|| check_first_line(line, &tab_check) == -1 || end < 0)
	{
		ft_putstr("Map error1\n");
		return (-1);
	}
	end = write_in_tab(fd, tab, param_tab, &line);
	if (end == -2 || (*param_tab).width == 0
		|| (*param_tab).length == 0)
	{
		ft_putstr("Map error2\n");
		if (line == NULL)
			free((line));
		close(fd);
		return (-1);
	}
	if (check_in_tab((&tab_check), (*param_tab), *tab) == -1)
	{
		ft_putstr("Map error3\n");
		return (-1);
	}
	free(tab_check);
	close(fd);
	return (fd);
}
