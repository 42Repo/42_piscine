/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asuc <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 18:01:31 by asuc              #+#    #+#             */
/*   Updated: 2023/07/16 15:48:54 by asuc             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_to_hex(unsigned char c)
{
	if (c < 100)
	{
		write(1, &"0123456789abcdef"[c / 16], 1);
		write(1, &"0123456789abcdef"[c % 16], 1);
	}	
	else
	{
		write(1, "7f", 2);
	}
}

int	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] <= 31 || str[i] == 127)
		{
			write(1, "\\", 1);
			ft_to_hex(str[i]);
		}
		else
		{
			write(1, &str[i], 1);
		}
	i++;
	}
	return (i);
}
