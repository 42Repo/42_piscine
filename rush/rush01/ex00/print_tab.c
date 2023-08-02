/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_tab.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bedarenn <bedarenn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 14:14:10 by ttrave            #+#    #+#             */
/*   Updated: 2023/07/23 11:19:53 by bedarenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "all.h"
#include <unistd.h>

void	ft_print_line(int *tab, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		ft_putchar(tab[i] + '0');
		i++;
		if (i < size)
			ft_putchar(' ');
	}
}

void	ft_print_tab(int **tab, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		ft_print_line(tab[i], size);
		i++;
		ft_putchar('\n');
	}
}

void	ft_print_tab_arg(int **tab, int **arg, int size)
{
	int	i;

	ft_putstr("    ");
	ft_print_line(arg[0], size);
	ft_putstr("\n  o");
	i = 0;
	while (i++ < size * 2 + 1)
		ft_putchar('-');
	ft_putstr("o\n");
	i = 0;
	while (i < size)
	{
		ft_putchar(arg[2][i] + '0');
		ft_putstr(" | ");
		ft_print_line(tab[i], size);
		ft_putstr(" | ");
		ft_putchar(arg[3][i] + '0');
		i++;
		ft_putchar('\n');
	}
	ft_putstr("  o");
	i = 0;
	while (i++ < size * 2 + 1)
		ft_putchar('-');
	ft_putstr("o\n    ");
	ft_print_line(arg[1], size);
	ft_putchar('\n');
}
