/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_tab.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asuc <asuc@student.42angouleme.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 22:42:35 by mael              #+#    #+#             */
/*   Updated: 2023/08/02 15:10:18 by asuc             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft.h"

/*	Fonction qui integre le carre solution a la grille string de depart	*/
char	**char_tab_update(t_coord_square square, t_param_tab param, char **tab)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < square.size)
	{
		j = 0;
		while (j < square.size)
		{
			if (tab[square.y - j][square.x - i] != param.obstacle)
				tab[square.y - j][square.x - i] = param.full;
			j++;
		}
		i++;
	}
	return (tab);
}

/*	Fonction qui print la grille finale	*/
void	ft_put_str_tab(char **tab, t_param_tab param)
{
	int	i;

	i = 0;
	while (i < param.length)
	{
		ft_putstr(tab[i]);
		ft_putstr("\n");
		i++;
	}
}
