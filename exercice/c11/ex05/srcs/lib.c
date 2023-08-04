/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lib.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asuc <asuc@student.42angouleme.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 15:58:01 by asuc              #+#    #+#             */
/*   Updated: 2023/08/03 22:36:23 by asuc             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft.h"

int	ft_atoi(char *str)
{	
	int	i;
	int	sign;
	int	sum;

	i = 0;
	sign = 1;
	sum = 0;
	while ((str[i] == ' ' && str[i]) || (str[i] >= 9 && str[i] <= 13))
			i++;
	while (str[i] && (str[i] == '+' || str[i] == '-'))
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i] && (str[i] >= '0' && str [i] <= '9'))
	{
		sum += str[i] - 48;
		if (str[i + 1] >= '0' && str[i + 1] <= '9')
			sum *= 10;
		i++;
	}
	sum *= sign;
	return (sum);
}

void	ft_putnbr(int nb)
{
	int	print;

	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
	}
	else
	{
		if (nb < 0)
		{
			write(1, "-", 1);
			ft_putnbr(-1 * nb);
		}
		if (nb >= 0)
		{
			print = nb % 10 + '0';
			if (nb >= 10)
			{
				ft_putnbr(nb / 10);
			}
			write(1, &print, 1);
		}
	}
}

int	check_is_ope(char *op)
{
	if (!(op[0] == '+' || op[0] == '-'
			|| op[0] == '*' || op[0] == '%'
			|| op[0] == '/'))
		return (-1);
	return (0);
}

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

void	set_all_fonc(int (*(*all_fonc)[])(int, int))
{	
	(*all_fonc)[0] = &mul;
	(*all_fonc)[1] = &add;
	(*all_fonc)[2] = &div;
	(*all_fonc)[3] = &mod;
	(*all_fonc)[4] = &sub;
}
