/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asuc <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 14:07:59 by asuc              #+#    #+#             */
/*   Updated: 2023/07/20 14:19:32 by asuc             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{	
	int	i;
	int	sign;
	int	sum;

	i = 0;
	sign = 1;
	sum = 0;
	while (str[i] == ' ' && str[i] || (str[i] >= 9 && str[i] <= 13))
			i++;
	while (str[i] && (str[i] == '+' || str[i] == '-'))
	{
		if (str[i] == '-')
			sign *= -sign;
		i++;
	}
	while (str[i] && str[i] >= '0' && str [i] <= '9')
	{
		sum += str[i] - 48;
		if (str[i + 1] >= '0' && str[i + 1] <= '9')
			sum *= 10;
		i++;
	}
	sum *= sign;
	return (sum);
}
