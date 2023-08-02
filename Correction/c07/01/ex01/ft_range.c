/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asuc <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 01:13:11 by asuc              #+#    #+#             */
/*   Updated: 2023/07/24 12:15:09 by asuc             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*tab;
	int	i;
	int	size;
	int	count;

	tab = NULL;
	count = 0;
	i = min;
	if (min >= max)
		return (tab);
	size = max - min;
	tab = malloc(size * sizeof(int));
	while (i < max)
	{
		tab[count] = i;
		i++;
		count++;
	}
	return (tab);
}
