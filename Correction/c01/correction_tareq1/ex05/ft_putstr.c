/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asuc <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 18:58:58 by asuc              #+#    #+#             */
/*   Updated: 2023/07/13 01:52:47 by asuc             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

		i = 0;
	while (str[i])
	{
		write(1, str + i, 1);
		i++;
	}
}

int main ()
{
	char tab[3] = {'a', 'b', 'c'};
	ft_putstr(tab);
	return 0;
}
