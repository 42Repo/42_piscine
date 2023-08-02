/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asuc <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 22:32:44 by asuc              #+#    #+#             */
/*   Updated: 2023/07/14 20:26:31 by asuc             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *b;
	*b = *a;
	*a = temp;
}

void	ft_sort_int_tab(int *tab, int size)
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
			if (tab[i] > tab[i + 1])
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

void main(void)
{
	int d[6] = {9,5,3,6,3,5};
	ft_sort_int_tab(d, 6);
	int i = 0;
	while (i < 6)
	{
		printf("%d", d[i]);
		i++;
	}
}
