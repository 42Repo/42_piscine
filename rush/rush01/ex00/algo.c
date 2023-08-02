/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bedarenn <bedarenn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 19:39:50 by bedarenn          #+#    #+#             */
/*   Updated: 2023/07/23 11:21:44 by bedarenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "all.h"

int	check_all(int **tab, int **arg, int size, int coord)
{
	int	check_return;

	check_return = 1;
	if (coord / size == size - 1)
		check_return *= check_arg_column_bot(tab, arg, coord, size);
	if (coord % size == size - 1)
		check_return *= check_arg_line_right(tab, arg, coord, size);
	return (check_arg_column_top(tab, arg, coord, size)
		&& check_arg_line_left(tab, arg, coord, size)
		&& check_occ(tab, size, coord)
		&& check_return);
}

int	algo(int **tab, int **arg, int size, int coord)
{
	while (tab[coord / size][coord % size] < size)
	{
		tab[coord / size][coord % size]++;
		if (check_all(tab, arg, size, coord))
		{
			if (coord == size * size - 1)
				return (1);
			if (algo(tab, arg, size, coord + 1))
				return (1);
		}
	}
	tab[coord / size][coord % size] = 0;
	return (0);
}
