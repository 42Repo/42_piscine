/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   square_solver.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asuc <asuc@student.42angouleme.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 10:28:36 by mbuchs            #+#    #+#             */
/*   Updated: 2023/08/02 15:10:18 by asuc             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



	Si la grille a une solution, return un nombre positif, sinon return 0	
int	square_in_tab(int **tab, t_param_tab param, t_coord_square *square)
{
	int	solvable;

	(*square).size = 0;
	(*square).y = 0;
	solvable = 0;
	while((*square).y < param.length && (*square).y + (*square).size < param.length)
	{
		(*square).x = 0;
		while ((*square).x < param.width && (*square).x + (*square).size < param.width)
		{
			if (square_check(tab, param, square) > 0)
				solvable++;
			(*square).x++;
		}
		(*square).y++;
	}
	return (solvable);
}

Si le carre est valide, return un nombre positif, sinon return 0	
int	square_check(int **tab, t_param_tab param, t_coord_square *square)
{
	int	solvable;

	solvable = 0;
	(*square).xr = (*square).x + (*square).size - 1;
	(*square).yd = (*square).y + (*square).size - 1;

	while ((tab[(*square).xr][(*square).yd] - tab[(*square).x][(*square).yd]
				- tab[(*square).xr][(*square).y] + tab[(*square).x] [(*square).y] <= 0)
				&& (*square).xr < param.width && (*square).yd < param.length)
	{
		solvable++;
		(*square).size++;
		(*square).xr = (*square).x + (*square).size - 1;
		(*square).yd = (*square).y + (*square).size - 1;
		(*square).best_x = (*square).x + (*square).size;
		(*square).best_y = (*square).y + (*square).size;
	}
	return (solvable);
}*/