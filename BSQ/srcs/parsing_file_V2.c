/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing_file_V2.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asuc <asuc@student.42angouleme.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 22:17:20 by asuc              #+#    #+#             */
/*   Updated: 2023/08/02 18:36:12 by asuc             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft.h"

t_param_tab	to_struct(char *line)
{
	t_param_tab	param;
	int			len;

	len = ft_strlen(line);
	param.full = line[len - 1];
	param.obstacle = line[len - 2];
	param.empty = line[len - 3];
	line[len - 3] = 0;
	param.length = ft_atoi(line);
	return (param);
}

int	ft_is_already(char c, char **tab)
{
	int	i;

	i = 0;
	while ((*tab)[i])
	{
		if (c == (*tab)[i])
		{
			 
			return (-1);
		}
		i++;
	}
	return (0);
}

int	check_first_line(char *line, char	**tab)
{
	int	i;
	int	len;

	i = 0;
	len = ft_strlen(line);
	while (i < 3)
	{
		if (ft_char_is_printable(line[len - i - 1]) == -1)
		{
			 
			return (-1);
		}
		if (ft_is_already(line[len - i - 1], tab) == -1)
			{
			 
			return (-1);
		}
		(*tab)[i] = line[len - i - 1];
		i++;
	}
	while (i < len)
	{
		if (ft_char_is_numbers(line[len - i - 1]) == -1)
		{
			 
			return (-1);
		}
		i++;
	}
	return (0);
}

int lenght_file(int fd)
{
	int len;
	int ret;
	int buf[65535];

	len = 0;
	ret = 0;
	while (1)
	{
		ret = read(fd,buf,65535);
		if (ret <= 0)
			break;
		len += ret;
	}
	return len;

}

int	write_in_tab(int fd, char ***tab, t_param_tab *param_tab, int len, char **tab_check)
{
	int		i;
	char	buf[len];

	read(fd,buf, len);
	(*tab) = ft_split(buf, "\n");

	if (ft_strlen((*tab)[0]) < 4
		|| check_first_line((*tab)[0], tab_check) == -1)
	{
		 
		return (-1);
	}

	*param_tab = to_struct((*tab)[0]);
	i = 0;
	(*param_tab).width = 0;
	while ((*tab)[i])
	{
		if ((*param_tab).width < ft_strlen((*tab)[i]))
			(*param_tab).width = ft_strlen((*tab)[i]); 
		i++;
	}
	
	if ((*param_tab).width == 0
		|| (*param_tab).length == 0)
	{
		ft_putstr_err("map error2\n");
		close(fd);
		return (-1);
	}
	return (0);
}