/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asuc <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 17:10:22 by asuc              #+#    #+#             */
/*   Updated: 2023/07/20 17:33:58 by asuc             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;

	i = 0;
	if (nb <= 0)
		return (0);
	while (i <= 46341)
	{
		if (i * i == nb)
			return (i);
		if (i * i > nb)
			return (i);
		i++;
	}
	return (i);
}

int	ft_is_prime(int nb)
{
	int	sqr;
	int	i;

	i = 2;
	if (nb < 2)
		return (0);
	sqr = ft_sqrt(nb);
	while (i <= sqr)
	{
		if (nb % i == 0 && i != nb)
			return (0);
		if (i == 2)
			i++;
		else
			i += 2;
	}
	return (nb);
}

int	ft_find_next_prime(int nb)
{
	while (ft_is_prime(nb) == 0)
		nb++;
	return (nb);
}
