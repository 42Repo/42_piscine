/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tab_explore.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-cast <mde-cast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 13:27:29 by mbuchs            #+#    #+#             */
/*   Updated: 2023/07/29 16:30:44 by mde-cast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft.h"

int	ft_print_thousand(t_dict *s1, int selected_nbr, int *nbr)
{
	int	i;

	i = 0;
	while (s1[i].str != 0)
	{
		if (s1[i].index == ft_recursive_power(10, selected_nbr)
			&& (nbr[selected_nbr] != 0 || nbr[selected_nbr + 1] != 0
				|| nbr[selected_nbr + 2] != 0))
		{
			ft_putstr(s1[i].str);
			ft_putstr(" ");
			return (0);
		}
		else
			i++;
	}
	return (1);
}

int	ft_print_units(t_dict *s1, int *nbr, int selected_nbr, int len)
{
	int	i;

	i = 0;
	if (len == 1 && nbr[selected_nbr] == 0)
		ft_print_zero(s1);
	else
	{
		while (s1[i].str != 0)
		{
			if (s1[i].index == nbr[selected_nbr] && nbr[selected_nbr] != 0)
			{
				ft_putstr(s1[i].str);
				ft_putstr(" ");
				return (0);
			}
			else
				i++;
		}
	}
	return (1);
}

int	ft_print_hundreds(t_dict *s1, int *nbr, int selected_nbr, int len)
{
	int	i;

	i = 0;
	while (s1[i].str != 0)
	{
		if (s1[i].index == 100 && nbr[selected_nbr] != 0)
		{
			ft_print_units(s1, nbr, selected_nbr, len);
			ft_putstr(s1[i].str);
			ft_putstr(" ");
			return (0);
		}
		else
			i++;
	}
	return (1);
}

int	ft_print_tens(t_dict *s1, int *nbr, int selected_nbr)
{
	int	i;

	i = 0;
	while (s1[i].str != 0)
	{
		if (s1[i].index == 10 * nbr[selected_nbr] && nbr[selected_nbr] != 0)
		{
			ft_putstr(s1[i].str);
			ft_putstr(" ");
			return (0);
		}
		else
			i++;
	}
	return (1);
}

void	print_number(t_dict *s1, int tab_len, int *nbr)
{
	int	i;

	i = 0;
	while (tab_len - i >= 0)
	{
		if ((tab_len - i) % 3 == 0 && (tab_len - i) > 0)
			ft_print_hundreds(s1, nbr, tab_len - i - 1, tab_len);
		else if (((tab_len - i) % 3 == 2 && (tab_len - i - 2) > 0)
			|| tab_len - i == 2)
		{
			if (nbr[tab_len - i -1] == 1)
			{
				ft_print_special(s1, nbr, tab_len - i - 1);
				i++;
				ft_print_thousand(s1, tab_len - i - 1, nbr);
			}
			else
				ft_print_tens (s1, nbr, tab_len - i - 1);
		}
		else if ((tab_len - i) % 3 == 1)
			ft_print_units (s1, nbr, tab_len - i - 1, tab_len);
		if ((tab_len - i) % 3 == 1 && (tab_len - i) > 3)
			ft_print_thousand (s1, tab_len - i - 1, nbr);
		i++;
	}
}
