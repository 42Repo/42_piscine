/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asuc <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 21:08:46 by asuc              #+#    #+#             */
/*   Updated: 2023/07/13 13:49:52 by asuc             ###   ########.fr       */
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

int main()
{
	
	int poupi[6] = {5, 4, 3, 2, 1};
	int taille = 6;

	ft_rev_int_tab(poupi, taille);
	int index = 0;
	while(index < 6)
	{
		printf("%d ", poupi[index]);
		index++;
	}
	
	/*
	int a = 4;
	int b = 5;
	printf("%d", b);
	printf("%d", a);

	ft_swap(&a,&b);

	printf("%d", b);
	printf("%d", a);
	*/
}
