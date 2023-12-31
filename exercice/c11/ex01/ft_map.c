/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asuc <asuc@student.42angouleme.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 14:25:16 by asuc              #+#    #+#             */
/*   Updated: 2023/08/03 20:21:45 by asuc             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int	i;
	int	*tab_ret;

	i = 0;
	tab_ret = malloc(sizeof(int) * length);
	if (tab_ret == NULL)
		return (tab_ret);
	while (i < length)
	{
		tab_ret[i] = f(tab[i]);
		i++;
	}
	return (tab_ret);
}
