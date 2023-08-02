/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asuc <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 20:29:54 by asuc              #+#    #+#             */
/*   Updated: 2023/07/17 13:14:29 by asuc             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int		i;
	char	diff;

	i = 0;
	diff = 0;
	while (s1[i] || s2[i])
	{
	diff = s1[i] - s2[i];
		if (diff != 0)
			return (diff);
		i++;
	}
	return (diff);
}
