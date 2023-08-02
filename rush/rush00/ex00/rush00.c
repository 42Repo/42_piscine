/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmorar-f <friezemma@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 02:06:59 by jmorar-f          #+#    #+#             */
/*   Updated: 2023/07/16 19:42:41 by jmorar-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_line(int x)
{
	int	i;

	i = 0;
	while (i < x)
	{
		if (i == 0 || i == x - 1)
			ft_putchar('o');
		else
			ft_putchar('-');
		i++;
	}
	ft_putchar('\n');
}

void	ft_print_column(int x, int y)
{
	int	i;
	int	j;

	i = 1;
	j = 0;
	while (i < y - 1)
	{
		while (j < x)
		{
			if (j == 0 || j == x - 1)
				ft_putchar('|');
			else
				ft_putchar(' ');
			j++;
		}
		j = 0;
		ft_putchar('\n');
		i++;
	}
}

void	rush(int x, int y)
{
	if (x <= 0 || y <= 0)
		return ;
	else if (y == 1)
		ft_print_line(x);
	else
	{
		ft_print_line(x);
		ft_print_column(x, y);
		ft_print_line(x);
	}
}
