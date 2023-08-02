/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asuc <asuc@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 13:00:10 by mde-cast          #+#    #+#             */
/*   Updated: 2023/07/30 16:37:01 by asuc             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	*ft_putnbr_rec(long long nbr, int *array, int depth)
{
	array[depth] = nbr % 10;
	if (nbr >= 10)
		ft_putnbr_rec(nbr / 10, array, depth + 1);
	return (array);
}

int	all_len(long long nbr)
{
	int	count;

	count = 0;
	if (nbr == 0)
		return (1);
	while (nbr > 0)
	{
		nbr /= 10;
		count++;
	}
	return (count);
}

int	*ft_putnbr(long long nbr)
{
	int	*array;

	array = malloc((all_len(nbr) * sizeof(int)));
	if (array == 0)
		return (0);
	ft_putnbr_rec(nbr, array, 0);
	return (array);
}
