/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asuc <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 22:32:44 by asuc              #+#    #+#             */
/*   Updated: 2023/07/13 15:58:08 by asuc             ###   ########.fr       */
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
				ft_swap(&tab[i], &tab[i+1]);
			}
			i++;
			j--;
		}
		i = 0;
		k--;
		j = size - 1 - (size - k);
	}
}

int main()
{

	int poupi[6] = {5, 4, 5, 6, 1, 5};
	int taille = 6;

	ft_sort_int_tab(poupi, taille);
	int index = 0;
	while(index < 6)
	{
		printf("%d ", poupi[index]);
		index++;
	}

}
