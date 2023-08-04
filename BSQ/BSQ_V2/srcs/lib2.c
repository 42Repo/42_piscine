/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lib2.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asuc <asuc@student.42angouleme.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 11:16:39 by asuc              #+#    #+#             */
/*   Updated: 2023/08/02 14:45:12 by asuc             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft.h"

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

int	ft_char_is_printable(char c)
{
	if (c >= 32 && c <= 126)
		return (0);
	return (-1);
}

int	ft_char_is_numbers(char c)
{
	if (c >= '0' && c <= '9')
		return (0);
	return (-1);
}

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
