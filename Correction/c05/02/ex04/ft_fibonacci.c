/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asuc <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 20:35:08 by asuc              #+#    #+#             */
/*   Updated: 2023/07/20 17:26:57 by asuc             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	int	res;

	if (index < 0)
		return (-1);
	if (index == 0)
		res = 0;
	if (index == 1)
		res = 1;
	if (index > 1)
		res = ft_fibonacci(index - 1) + ft_fibonacci(index - 2);
	return (res);
}
