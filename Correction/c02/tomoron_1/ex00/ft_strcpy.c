/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asuc <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 16:04:21 by asuc              #+#    #+#             */
/*   Updated: 2023/07/16 01:36:52 by asuc             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i + 1] = '\0';
	return (dest);
}
#include <stdio.h>
int main(void)
{
	char src[] = "AAAAAAAAAAAA";
	char dest[100] = "BBBBBBBBBBBBBBBBBBBBBBBBB";
	ft_strcpy(dest,src);
	printf("%s",dest);
	return(0);
}
