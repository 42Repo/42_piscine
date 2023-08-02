/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bedarenn <bedarenn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 10:56:21 by bedarenn          #+#    #+#             */
/*   Updated: 2023/07/23 10:12:26 by bedarenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "all.h"

int	main(int argc, char **argv)
{
	int	size;
	int	**arg;
	int	**tab;

	if (argc != 2)
	{
		ft_putstr("Error\n");
		return (1);
	}
	size = test_arg(argv[1]);
	if (size == 0)
	{
		ft_putstr("Error\n");
		return (1);
	}
	arg = malloc_arg(argv[1], size);
	if (!arg)
		return (2);
	tab = malloc_tab(size);
	if (!tab)
	{
		free_tab(arg, 4);
		return (2);
	}
	printf("re: %i\n", algo(tab, arg, size, 0));
	ft_print_tab_arg(tab, arg, size);
	free_tab(arg, 4);
	free_tab(tab, size);
	return (0);
}

// "4 3 2 1 1 2 2 2 4 3 2 1 1 2 2 2"
// "1 2 2 2 3 3 1 2 3 3 1 3 2 2 2 5 2 1 3 3"
// "3 3 1 2 2 3 2 1 2 2 3 4 3 3 2 2 1 2 3 2 1 2 3 4"
// "3 2 4 2 3 4 2 1 3 3 2 1 3 3 2 2 3 3 3 2 4 1 5 2 5 2 2 2 2 2 5 1 4 3 3 3"
// "6 5 4 3 2 1 1 2 2 2 2 2 6 5 4 3 2 1 1 2 2 2 2 2"
// "9 8 7 6 5 4 3 2 1 1 2 2 2 2 2 2 2 2 9 8 7 6 5 4 3 2 1 1 2 2 2 2 2 2 2 2"