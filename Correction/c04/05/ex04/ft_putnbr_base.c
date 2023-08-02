/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asuc <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 16:44:30 by asuc              #+#    #+#             */
/*   Updated: 2023/07/24 18:02:30 by asuc             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

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

int	ft_test_error_base(char *base)
{
	int	ret;
	int	i;
	int	j;

	i = 0;
	j = 0;
	ret = 1;
	if (ft_strlen(base) <= 1)
		ret = 0;
	while (base[i])
	{
		while (base[j])
		{
			j++;
			if (base[j] == base[i] || base[i] == '+' || base[i] == '-')
				ret = 0;
		}
		j = i + 1;
		i++;
	}
	return (ret);
}

void	ft_putnbr_base_rec(long int nbr, char *base)
{
	int	print;

	print = base[nbr % ft_strlen(base)];
	if (nbr >= ft_strlen(base))
		ft_putnbr_base_rec(nbr / ft_strlen(base), base);
	write(1, &print, 1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	if (ft_test_error_base(base) == 0)
		return ;
	if (nbr < 0)
	{
		write(1, "-", 1);
		ft_putnbr_base_rec((long int)nbr * -1, base);
	}
	else
		ft_putnbr_base_rec(nbr, base);
}
