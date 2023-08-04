/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asuc <asuc@student.42angouleme.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 21:35:46 by asuc              #+#    #+#             */
/*   Updated: 2023/08/02 17:03:08 by asuc             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft.h"

int	main(int argc, char *argv[])
{
	int				fd;
	char			**tab_char;
	t_param_tab		param_tab;
	t_coord_square	square;
	int				i;

	i = 1;
	fd = 0; 
	if (argc < 1)
		return (-1);
	fd = open_file(argv[i], &param_tab, &tab_char);
	if (fd == -1)
		return (-1);
	set_int_tab(param_tab, &square, tab_char);
	tab_char = char_tab_update(square, param_tab, tab_char);
	ft_put_str_tab(tab_char, param_tab);
	free_all(param_tab, &tab_char);
	return (0);
}
