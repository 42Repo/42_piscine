/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asuc <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 13:43:40 by asuc              #+#    #+#             */
/*   Updated: 2023/07/24 19:53:35 by asuc             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i])
		i++;
	while (src[j])
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		j;
	char	*array;

	j = 0;
	i = -1;
	array = NULL;
	while (++i < size)
		j += ft_strlen(strs[i]);
	if (size <= 0)
		return (array);
	array = malloc((j + ((size) * ft_strlen(sep))) * sizeof(char));
	if (array == NULL)
		return (array);
	i = 0;
	j = 0;
	while (i < size)
	{
		ft_strcat(array, strs[i]);
		if (i + 1 < size)
			ft_strcat(array, sep);
		i++;
	}
	return (array);
}
//#include <stdio.h>
//int	main(int argc, char *argv[])
//{
//	char sep[] = "////";
//	char *tab = NULL;
//	tab = ft_strjoin(argc,argv,sep);
//	printf("%s",tab);
//}
