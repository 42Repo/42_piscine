/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asuc <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 16:44:30 by asuc              #+#    #+#             */
/*   Updated: 2023/07/26 16:18:59 by asuc             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_test_error_base(char *base);

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

char	*ft_putnbr_base_rec(long int nbr, char *base, char *array, int depth)
{
	array[depth] = base[nbr % ft_strlen(base)];
	if (nbr >= ft_strlen(base))
		ft_putnbr_base_rec(nbr / ft_strlen(base), base, array, depth - 1);
	return (array);
}

int	all_len(long int nbr, char *base)
{
	int	count;

	count = 0;
	if (nbr == 0)
		return (1);
	if (nbr < 0)
		nbr = nbr * -1;
	while (nbr > 0)
	{
		nbr /= ft_strlen(base);
		count++;
	}
	return (count);
}

char	*ft_putnbr_base(int nbr, char *base)
{
	char	*array;

	array = malloc((all_len(nbr, base) * sizeof(char)) + 1);
	if (array == 0)
		return (0);
	if (nbr < 0)
	{
		array[0] = '-';
		ft_putnbr_base_rec((long int)nbr * -1, base, array, all_len(nbr, base));
	}
	else
		ft_putnbr_base_rec((long int)nbr, base, array, all_len(nbr, base) - 1);
	return (array);
}
