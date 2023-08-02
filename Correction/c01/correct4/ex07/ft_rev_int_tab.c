/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asuc <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 21:08:46 by asuc              #+#    #+#             */
/*   Updated: 2023/07/14 18:34:24 by asuc             ###   ########.fr       */
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

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	j;

	i = 0;
	j = size - 1;
	while (size / 2 > i)
	{
		ft_swap(&tab[i], &tab[j]);
		j--;
		i++;
	}
}

void main()
{
	int t[]={1,2,3,4,5,6};
	ft_rev_int_tab(t, 6);
	int i;
	i = 0;
	while (i<=5)
	{
		printf("%d", t[i]);
		i++;
	}
}
