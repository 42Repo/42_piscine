/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   open_file_v2.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asuc <asuc@student.42angouleme.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 14:59:37 by asuc              #+#    #+#             */
/*   Updated: 2023/08/02 18:16:39 by asuc             ###   ########.fr       */
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
			{
				ft_putstr_err("map error\n");
				return (-1);
			}
			j++;
		}
		if (j < param_tab.width)
		{
			ft_putstr_err("map error\n");
			return (-1);
		}
		j = 0;
		i++;
	}
	return (0);
}

int check_open(int *fd, char *file_name)
{
	(*fd) = open(file_name, O_RDWR);
	if ((*fd) == -1)
	{
		ft_putstr_err("file error\n");
		return (-1);
	}
	return (0);
}

int	open_file(char *file_name, t_param_tab *param_tab, char	***tab)
{
	int		fd;	char	*tab_check;

	len = 0;
	tab_chec
	fd = 0;k = malloc(sizeof(char) * 3);
	while (len < 3)
	{
		tab_check[len] = 0;
		len++;
	}
	if (check_open(fd, file_name) == -1)
	{
		ft_putstr_err("map error\n");
		return (-1);
	}

	len = lenght_file(fd);
	close(fd);
	if (check_open(fd, file_name) == -1)
	{
		ft_putstr_err("emap error\n);
		return (-1);
	}
	write_in_tab(fd, tab, param_tab, len, &tab_check);
	close(fd);
	
	if (check_in_tab((&tab_check), (*param_tab), *tab) == -1)
	{
		ft_putstr_err("Map error3\n");
		return (-1);
	}
	free(tab_check);
	return (fd);
}
