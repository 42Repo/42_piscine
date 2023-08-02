/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asuc <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 19:11:48 by asuc              #+#    #+#             */
/*   Updated: 2023/07/12 12:44:23 by asuc             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print(int a, int b, int c)
{
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, &c, 1);
	if (!(a == '7' && b == '8' && c == '9'))
	{
		write(1, ", ", 2);
	}
}

void	ft_print_comb(void)
{
	int	a;
	int	b;
	int	c;

	a = '0';
	while (a < 56)
	{	
		b = a + 1;
		while (b < 57)
		{
			c = b + 1;
			while (c < 58)
			{
				ft_print(a, b, c);
				c++;
			}
		c = 48;
		b++;
		}
	b = 48;
	a++;
	}
}

int	main(void)
{
	ft_print_comb();
}
