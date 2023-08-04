/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asuc <asuc@student.42angouleme.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 13:25:47 by asuc              #+#    #+#             */
/*   Updated: 2023/08/03 23:42:12 by asuc             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft.h"

void	do_op(int a, int b, char *c, int (*all_fonc[])(int, int))
{
	if (c[0] == '*')
		(all_fonc)[0](a, b);
	if (c[0] == '+')
		(all_fonc)[1](a, b);
	if (c[0] == '/')
		(all_fonc)[2](a, b);
	if (c[0] == '%')
		(all_fonc)[3](a, b);
	if (c[0] == '-')
		(all_fonc)[4](a, b);
}

int	check_arg(char **arg)
{
	if (ft_strlen(arg[2]) > 1)
		return (-1);
	if (check_is_ope(arg[2]) == -1)
		return (-1);
	return (0);
}

int	main(int argc, char **argv)
{
	int	a;
	int	b;
	int	(*all_fonc[5])(int, int);

	set_all_fonc(&all_fonc);
	if (argc != 4)
		return (0);
	if (check_arg(argv) == -1)
		return (1);
	a = ft_atoi(argv[1]);
	b = ft_atoi(argv[3]);
	do_op(a, b, argv[2], all_fonc);
	return (0);
}
