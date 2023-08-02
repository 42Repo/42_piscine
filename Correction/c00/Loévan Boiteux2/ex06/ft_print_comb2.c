/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asuc <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 02:14:14 by asuc              #+#    #+#             */
/*   Updated: 2023/07/13 11:46:27 by asuc             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print(int a, int b, int c, int d)
{
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, " ", 1);
	write(1, &c, 1);
	write(1, &d, 1);
	write(1, ", ", 1);
}

void	ft_check_print(int a, int b, int c, int d)
{
	if (a < c)
	{
		ft_print(a, b, c, d);
	}
	if (a == c)
	{
		if (b < d)
		{
			ft_print(a, b, c, d);
		}
	}
}

void	ft_boucle_second_collumn(int a, int b)
{
	int	c;
	int	d;

	d = '1';
	c = a;
	while (c < 58)
	{
		while (d < 58)
		{
			ft_check_print(a, b, c, d);
			d++;
		}
		d = '0';
		c++;
	}
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = '0';
	b = '0';
	while (a < 58)
	{
		while (b < 58)
		{
			ft_boucle_second_collumn(a, b);
			b++;
		}
		b = '0';
		a++;
	}
}
