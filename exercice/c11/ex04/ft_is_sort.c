/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asuc <asuc@student.42angouleme.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 12:53:28 by asuc              #+#    #+#             */
/*   Updated: 2023/08/03 22:31:24 by asuc             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int	i;
	int	decrois;
	int	crois;

	i = 0;
	decrois = 0;
	crois = 0;
	if (length == 0)
		return (1);
	while (i < length - 1)
	{
		if (f(tab[i], tab[i + 1]) > 0)
			decrois++;
		else if (f(tab[i], tab[i + 1]) < 0)
			crois++;
		else
		{
			decrois++;
			crois++;
		}
	}
	if (crois != length - 1 && decrois != length - 1)
		return (-1);
	return (0);
}
