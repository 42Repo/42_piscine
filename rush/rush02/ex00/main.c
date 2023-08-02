/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asuc <asuc@student.42angouleme.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 12:56:35 by mde-cast          #+#    #+#             */
/*   Updated: 2023/08/01 10:20:00 by asuc             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

long	ft_atoi(char *str)
{
	long		i;
	long long	sign;
	long long	sum;

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

void	free_all(int line, char	***test2, t_dict **s1, int **tab)
{
	int	i;

	i = 0;
	while (i < line)
	{
		free((*test2)[i]);
		i++;
	}
	free((*test2));
	i = 0;
	while (i < line)
	{
		free((*s1)[i].str);
		i++;
	}
	free(*s1);
	free(*tab);
}

int	main(int argc, char **argv)
{
	int		*tab;
	char	**test2;
	t_dict	*s1;
	int		line;
	int		lenght;

	if (argc < 2)
		return (0);
	s1 = malloc(sizeof(t_dict) * 100);
	tab = ft_putnbr(ft_atoi(argv[1]));
	test2 = malloc(50 * sizeof(char *));
	line = open_append(&test2);
	if (test2 == NULL)
	{
		free_all(line, &test2, &s1, &tab);
		return (0);
	}
	struct_file(test2, &s1);
	lenght = all_len(ft_atoi(argv[1]));
	print_number(s1, lenght, tab);
	free_all(line, &test2, &s1, &tab);
	return (0);
}
