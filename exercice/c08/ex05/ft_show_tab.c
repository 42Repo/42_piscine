/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asuc <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 21:06:55 by asuc              #+#    #+#             */
/*   Updated: 2023/07/26 23:46:41 by asuc             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <unistd.h>

void	ft_putnbr(int nb)
{
	int	print;

	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
	}
	else
	{
		if (nb < 0)
		{
			write(1, "-", 1);
			ft_putnbr(-1 * nb);
		}
		if (nb >= 0)
		{
			print = nb % 10 + '0';
			if (nb >= 10)
			{
				ft_putnbr(nb / 10);
			}
			write(1, &print, 1);
		}
	}
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

void	print_struct(struct s_stock_str par)
{
	write(1, par.str, ft_strlen(par.str));
	write(1, "\n", 1);
	ft_putnbr(par.size);
	write(1, "\n", 1);
	write(1, par.copy, ft_strlen(par.copy));
	write(1, "\n", 1);
}

void	ft_show_tab(struct s_stock_str *par)
{
	int	i;

	i = 0;
	while (par[i].str != 0)
	{
		print_struct(par[i]);
		i++;
	}
}
