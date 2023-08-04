/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   int_tab_generator.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asuc <asuc@student.42angouleme.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 10:28:36 by mbuchs            #+#    #+#             */
/*   Updated: 2023/08/02 16:37:03 by asuc             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft.h"
/*	Fonction d'initialisation du tableau d'int par rapport au tableau de char	*/
void set_int_tab(t_param_tab param, t_coord_square *square, char **tab_char)
{
	int	**tab_int;
	int	i;
	int	j;

	(*square).size = 0;
	i = 0;
	tab_int = tab_int_malloc(param.length, param.width);
	while (i < param.length)
	{
		j = 0;
		while (j < param.width)
		{
			if (tab_char[i][j] == param.obstacle)
				tab_int[i][j] = 0;
			else
				int_tab_update(i, j, &tab_int, square);
			j++;
			
		}
		i++;
	}
}

/*	Fonction qui associe une valeur a la case selectionnee	*/
void	int_tab_update(int i, int j, int ***tab, t_coord_square *sqr)
{
	if (j == 0 || i == 0)
		(*tab)[i][j] = 1;
	else if ((*tab)[i][j - 1] <= (*tab)[i - 1][j - 1]
			&& (*tab)[i][j - 1] <= (*tab)[i - 1][j])
		(*tab)[i][j] = (*tab)[i][j - 1] + 1;
	else if ((*tab)[i - 1][j - 1] <= (*tab)[i - 1][j]
			&& (*tab)[i - 1][j - 1] <= (*tab)[i][j - 1])
		(*tab)[i][j] = (*tab)[i - 1][j - 1] + 1;
	else if ((*tab)[i - 1][j] <= (*tab)[i - 1][j - 1]
			&& (*tab)[i - 1][j] <= (*tab)[i][j - 1])
		(*tab)[i][j] = (*tab)[i - 1][j] + 1;
	if ((*tab)[i][j] > (*sqr).size)
	{
		(*sqr).size = (*tab)[i][j];
		(*sqr).y = i;
		(*sqr).x = j;
	}
	j++;
}
