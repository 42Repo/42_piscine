/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asuc <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 16:50:06 by asuc              #+#    #+#             */
/*   Updated: 2023/07/18 13:36:19 by asuc             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	resultat_d;
	unsigned int	resultat_s;

	i = ft_strlen(dest);
	j = 0;
	resultat_d = i;
	resultat_s = ft_strlen(src);
	if (size < 1)
		return (resultat_s + size);
	while (src[j] && i < size - 1)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = 0;
	if (size < resultat_d)
		return (resultat_s + size);
	else
		return (resultat_s + resultat_d);
}
