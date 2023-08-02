/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asuc <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 20:28:25 by asuc              #+#    #+#             */
/*   Updated: 2023/07/19 21:51:31 by asuc             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	int	max;

	max = nb;
	if (power < 0 || nb <= 0)
		return (0);
	if (power == 0)
		return (1);
	if (power != 0)
	{
		max = ft_recursive_power(nb, power - 1);
		return (max * nb);
	}
	return (1);
}
