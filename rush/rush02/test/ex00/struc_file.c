/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   struc_file.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asuc <asuc@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/30 14:40:44 by asuc              #+#    #+#             */
/*   Updated: 2023/07/30 21:31:59 by asuc             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

t_dict	to_struct(char **tab2)
{
	t_dict	s1;
	int		i;

	i = 0;
	s1.index = (int)ft_atoi(tab2[0]);
	while (tab2[1][i] != '\n' && tab2[1][i] != 0)
		i++;
	tab2[1][i] = '\0';
	s1.str = tab2[1];
	return (s1);
}

void	struct_file(char **tab, t_dict	**s1)
{
	char	**tab2;
	int		i;

	i = 0;
	while (tab[i] != NULL)
	{
		tab2 = ft_split(tab[i], ": ");
		(*s1)[i] = to_struct(tab2);
		free(tab2[0]);
		free(tab2);
		i++;
	}
	(*s1)[i].str = "0";
}

int	ft_print_special(t_dict *s1, int *nbr, int selected_nbr)
{
	int	full_nbr;
	int	i;

	i = 0;
	full_nbr = (nbr[selected_nbr] * 10) + (nbr[selected_nbr - 1]);
	while (s1[i -1].index != full_nbr)
	{
		if (s1[i].index == full_nbr)
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

int	ft_print_zero(t_dict *s1)
{
	int	i;

	i = 0;
	while (s1[i].str != 0)
	{
		if (s1[i].index == 0)
		{
			ft_putstr(s1[i].str);
			return (0);
		}
		else
			i++;
	}	
	return (1);
}
