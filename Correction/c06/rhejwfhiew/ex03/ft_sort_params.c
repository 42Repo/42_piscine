/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asuc <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 23:14:32 by asuc              #+#    #+#             */
/*   Updated: 2023/07/21 17:51:12 by asuc             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

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

void	ft_swap(char **a, char **b)
{
	char	*temp;

	temp = *b;
	*b = *a;
	*a = temp;
}

int	ft_strcmp(char *s1, char *s2)
{
	int		i;
	char	diff;

	i = 0;
	diff = 0;
	while (s1[i] || s2[i])
	{
	diff = s1[i] - s2[i];
		if (diff != 0)
			return (diff);
		i++;
	}
	return (diff);
}

void	ft_sort_int_tab(char **tab, int size)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	j = size - 1;
	k = size - 1;
	while (k)
	{
		while (j)
		{
			if (ft_strcmp(tab[i], tab[i + 1]) > 0)
			{
				ft_swap(&tab[i], &tab[i + 1]);
			}
			i++;
			j--;
		}
		i = 0;
		k--;
		j = size - 1;
	}
}

int	main(int argc, char *argv[])
{
	int	k;

	k = 1;
	ft_sort_int_tab(argv, argc);
	while (k < argc)
	{
		write(1, argv[k], ft_strlen(argv[k]));
		write(1, "\n", 1);
		k++;
	}
}
