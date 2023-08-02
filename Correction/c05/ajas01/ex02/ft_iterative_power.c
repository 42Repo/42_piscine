/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asuc <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 18:55:33 by asuc              #+#    #+#             */
/*   Updated: 2023/07/19 20:25:24 by asuc             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	nb_base;

	nb_base = nb;
	i = 0;
	if (power < 0 || nb <= 0)
		return (0);
	if (power == 0)
	{
		return (1);
	}
	while (i < power - 1)
	{
		nb *= nb_base;
		i++;
	}
	return (nb);
}
