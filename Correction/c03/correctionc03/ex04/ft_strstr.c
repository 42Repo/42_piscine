/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asuc <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 12:37:46 by asuc              #+#    #+#             */
/*   Updated: 2023/07/17 23:18:09 by asuc             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int		i;
	char	diff;

	i = 0;
	diff = 0;
	while ((s1[i] || s2[i]) && i < n)
	{
	diff = s1[i] - s2[i];
		if (diff != 0)
			return (diff);
		i++;
	}
	return (diff);
}

char	*ft_strstr(char *str, char *to_find)
{
	int		i;

	i = 0;
	if (ft_strlen(to_find) == 0)
		return (str);
	while (str[i])
	{
		if ((str[i] == to_find[0])
			&& (ft_strncmp(&str[i], to_find, ft_strlen(to_find)) == 0))
			return (&str[i]);
	i++;
	}
	return (0);
}
#include <stdio.h>
int main(void)
{
	printf("%s",ft_strstr("safstesafsa",""));
	return(0);
}
