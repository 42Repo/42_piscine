/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asuc <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 18:51:56 by asuc              #+#    #+#             */
/*   Updated: 2023/07/26 12:24:36 by asuc             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	search_in_charset(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i])
	{
		if (c == charset[i])
			return (-1);
		i++;
	}
	return (0);
}

char	*ft_strdup(char *src, char *charset)
{
	char	*tab;
	int		i;
	int		len;

	len = 0;
	i = 0;
	while (src[len])
		len++;
	tab = malloc(sizeof(char) * len);
	if (tab == NULL)
		return (tab);
	while (src[i] && search_in_charset(src[i], charset) == 0 && tab)
	{
		tab[i] = src[i];
		i++;
	}
	tab[i] = '\0';
	return (tab);
}

int	count_word(char *str, char *charset)
{
	int	i;
	int	count;
	int	bol;

	count = 0;
	i = 0;
	bol = 1;
	while (str[i])
	{
		if (search_in_charset(str[i], charset) == 0)
		{
			if (bol == 1)
				count++;
			bol = 0;
		}
		else
		{
			bol = 1;
		}
		i++;
	}
	return (count);
}

char	**ft_split(char *str, char *charset)
{
	char	**ret;
	int		i;
	int		j;

	ret = NULL;
	j = 0;
	i = 0;
	ret = malloc(sizeof(char *) * (count_word(str, charset) + 1));
	if (ret == NULL)
		return (ret);
	while (i < count_word(str, charset) && str)
	{
		while (-1 == search_in_charset(str[j], charset)
			&& str[j] != 0)
			j++;
		ret[i] = ft_strdup(str + j, charset);
		i++;
		while (0 == search_in_charset(str[j], charset)
			&& str[j] != 0)
			j++;
	}
	ret[i] = 0;
	return (ret);
}
#include <stdio.h>
void main(int argc, char *argv[])
{
	int i = 0;
	char **res = ft_split(argv[1], argv[2]);
	while (i < count_word(argv[1], argv[2]))
	{
		printf("%s\n", res[i]);
		i++;
	}
}
