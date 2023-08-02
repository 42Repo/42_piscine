/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asuc <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 14:25:30 by asuc              #+#    #+#             */
/*   Updated: 2023/07/13 11:46:08 by asuc             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	int	print;

	if (nb < 0)
	{
		write(1, "-", 1);
		ft_putnbr(-1 * nb);
	}
	if (nb > 0)
	{
		print = nb % 10 + '0';
		if (nb > 10)
		{
			ft_putnbr(nb / 10);
		}
		write(1, &print, 1);
	}
}