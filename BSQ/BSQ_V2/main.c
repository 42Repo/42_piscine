/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asuc <asuc@student.42angouleme.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 21:35:46 by asuc              #+#    #+#             */
/*   Updated: 2023/08/02 17:003:08 by asuc             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft.h"

int	main(int argc, char *argv[])
{
	int		i;
	int 	returned;

	i = 1;
//	if (argc < 1)
//		bsq_file(stdrt_input_read);
	while (i < argc)
	{
		returned = bsq_file(argv[i]);
		i++;
	}
	return (returned);
}

int	bsq_file(char *argv)
{
	int				fd;
	char			**tab_char;
	t_param_tab		param_tab;
	t_coord_square	square;

	fd = open_file(argv, &param_tab, &tab_char);
	if (fd == -1)
		return (-1);
	set_int_tab(param_tab, &square, tab_char);
	if (square.x == -1)
		{
			ft_putstr("map error\n");
			return (-1);
		}
	tab_char = char_tab_update(square, param_tab, tab_char);	
	ft_put_str_tab(tab_char, param_tab);
	free_all(param_tab, &tab_char);
	return (0);
}

/*char	**stdrt_input_read()
{
	int	buffer[65556];
	read(0, &buffer, 65535);
	
}*/