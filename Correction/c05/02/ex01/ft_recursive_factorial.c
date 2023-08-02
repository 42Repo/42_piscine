/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asuc <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 17:44:43 by asuc              #+#    #+#             */
/*   Updated: 2023/07/19 18:56:40 by asuc             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int	max;

	max = 1;
	if (nb <= 0)
		return (0);
	if (nb != 1)
	{
		max = ft_recursive_factorial(nb - 1);
		return (max * nb);
	}
	return (1);
}
