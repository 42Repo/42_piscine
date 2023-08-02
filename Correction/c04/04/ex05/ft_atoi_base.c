/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asuc <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 21:24:05 by asuc              #+#    #+#             */
/*   Updated: 2023/07/20 15:31:05 by asuc             ###   ########.fr       */
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

int	ft_test_error_base(char *base)
{
	int	ret;
	int	i;
	int	j;

	i = 0;
	j = 0;
	ret = 1;
	if (ft_strlen(base) <= 1)
		ret = 0;
	while (base[i])
	{
		while (base[j])
		{
			j++;
			if (base[j] == base[i] || base[i] == '+' || base[i] == '-'
				|| (base[i] == ' ') || (base[i] >= 9 && base[i] <= 13))
				ret = 0;
		}
		j = i + 1;
		i++;
	}
	return (ret);
}

int	ft_is_in_base(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (c == base[i])
			return (1);
		i++;
	}
	return (0);
}

int	ft_search_index_base(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (c == base[i])
			return (i);
		i++;
	}
	return (-1);
}

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	sign;
	int	sum;

	i = 0;
	sign = 1;
	sum = 0;
	if (ft_test_error_base(base) == 0)
		return (0);
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
			i++;
	while (str[i] && (str[i] == '+' || str[i] == '-'))
	{
		if (str[i] == '-')
			sign = sign * -1;
		i++;
	}
	while (str[i] && ft_is_in_base(str[i], base) != -1)
	{
		sum *= ft_strlen(base);
		sum += ft_search_index_base(str[i], base);
		i++;
	}
	sum *= sign;
	return (sum);
}
