/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   open_file_V2.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbuchs <mae@buchs.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 14:59:37 by asuc              #+#    #+#             */
/*   Updated: 2023/08/02 18:44:57 by mbuchs           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft.h"

int	check_in_tab(char **tab_check, t_param_tab param_tab, char **tab)
{
	int	i;
	int	j;

	i = 1;
	j = 0;
	(*tab_check)[0] = (*tab_check)[1];
	(*tab_check)[1] = (*tab_check)[2];
	(*tab_check)[2] = '\0';
	while (i < param_tab.length)
	{
		while (tab[i][j])
		{
			if (i > param_tab.length || j >= param_tab.width
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

int check_open(int *fd, char *file_name)
{
	(*fd) = open(file_name, O_RDWR);
	if ((*fd) == -1)
		ft_putstr("ZIZI\n");
	if ((*fd) == -1)
		return (-1);
	return (0);
}

int	open_file(char *file_name, t_param_tab *param_tab, char	***tab)
{
	int		fd;
	int		len;
	char	*tab_check;

	len = 0;
	fd = 0;
	tab_check = malloc(sizeof(char) * 3);
	while (len < 3)
	{
		tab_check[len] = 0;
		len++;
	}
	if (check_open(&fd, file_name) == -1)
	{
		 
		return (-1);
	}

	len = lenght_file(fd);
	close(fd);
	if (check_open(&fd, file_name) == -1)
	{
		 
		return (-1);
	}
	write_in_tab(fd, tab, param_tab, len, &tab_check);
	close(fd);
	
	if (check_in_tab((&tab_check), (*param_tab), *tab) == -1)
	{
		
		return (-1);
	}
	free(tab_check);
	return (fd);
}
