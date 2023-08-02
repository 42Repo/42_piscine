/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asuc <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 22:32:44 by asuc              #+#    #+#             */
/*   Updated: 2023/07/13 12:24:10 by asuc             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*b = *a;
	*b = temp;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;

	i = 0;
	j = size;
	while (size--)
	{
		while (j)
		{
			if (tab[i] > tab[i + 1])
			{
				ft_swap(tab + i, tab + i + 1);
			}
			i++;
			j--;
		}
		size--;
		j = size;
	}
}

void	main(void)
{
	int	tab[] = {1, 7, 4, 2, 8};
	ft_sort_int_tab(tab, 5);
	char	c;
	c = '0' + tab[3];
	write(1, &c, 1);

}
