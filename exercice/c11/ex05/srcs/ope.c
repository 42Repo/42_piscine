/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ope.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asuc <asuc@student.42angouleme.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 13:29:16 by asuc              #+#    #+#             */
/*   Updated: 2023/08/03 22:44:42 by asuc             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft.h"

int	mul(int a, int b)
{
	ft_putnbr(a * b);
	write(1, "\n", 1);
	return (0);
}

int	add(int a, int b)
{
	ft_putnbr(a + b);
	write(1, "\n", 1);
	return (0);
}

int	div(int a, int b)
{
	if (b == 0)
		write(1, "Stop : division by zero\n", 24);
	else
	{
		ft_putnbr(a / b);
		write(1, "\n", 1);
	}
	return (0);
}

int	mod(int a, int b)
{
	if (b == 0)
		write(1, "Stop : modulo by zero\n", 22);
	else
	{
		ft_putnbr(a % b);
		write(1, "\n", 1);
	}
	return (0);
}

int	sub(int a, int b)
{
	ft_putnbr(a - b);
	write(1, "\n", 1);
	return (0);
}
