/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_tab.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asuc <asuc@student.42angouleme.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/30 12:07:23 by asuc              #+#    #+#             */
/*   Updated: 2023/08/01 10:20:00 by asuc             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[i])
		i++;
	while (src[j] && j < nb)
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int	get_next_line(int fd, char **line)
{
	int		sz;
	char	buffer[1];

	buffer[0] = '0';
	*line = malloc(1000 * sizeof(char));
	if (line == 0)
		return (0);
	sz = -1;
	while (++sz < 1000)
		(*line)[sz] = 0;
	sz = read(fd, buffer, 1);
	while (sz > 0)
	{
		ft_strncat(*line, buffer, 1);
		if (buffer[0] == '\n')
			break ;
		sz = read(fd, buffer, 1);
	}
	return (sz);
}
