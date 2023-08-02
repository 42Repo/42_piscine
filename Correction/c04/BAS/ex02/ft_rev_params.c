/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asuc <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 18:24:24 by asuc              #+#    #+#             */
/*   Updated: 2023/07/20 23:14:26 by asuc             ###   ########.fr       */
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

void	ft_swap(char **a, char **b)
{
	char	*temp;

	temp = *b;
	*b = *a;
	*a = temp;
}

int	main(int argc, char *argv[])
{
	int	k;
	int	i;
	int	j;

	k = 1;
	i = 0;
	j = argc;
	while (argc / 2 >= i)
	{
		ft_swap(&argv[i], &argv[j]);
		j--;
		i++;
	}
	while (k < argc)
	{
		write(1, argv[k], ft_strlen(argv[k]));
		write(1, "\n", 1);
		k++;
	}
}
