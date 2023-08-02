/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asuc <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 12:15:19 by asuc              #+#    #+#             */
/*   Updated: 2023/07/24 18:31:24 by asuc             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	size;
	int	count;

	*range = NULL;
	count = 0;
	i = min;
	if (min >= max)
		return (0);
	size = max - min;
	*range = malloc(size * sizeof(int));
	if (*range == NULL)
		return (-1);
	while (i < max)
	{
		(*range)[count] = i;
		i++;
		count++;
	}
	return (max - min);
}

//#include <stdio.h>
//int main()
//{
//	int *range = NULL;
//	int min = 10;
//	int max = 90;
//	int i = 0;
//	ft_ultimate_range(&range,min,max);
//	while (i < max - min)
//	{
//		printf("%d",range[i]);
//		i++;
//	}
//}
