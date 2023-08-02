/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_file.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbuchs <mae@buchs.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 11:10:04 by asuc              #+#    #+#             */
/*   Updated: 2023/08/02 17:52:46 by mbuchs           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


int	get_file(int fd, char **line)
{
	int		ret;
	char	*tmp;
	char	*tmp2;

	tmp2 = NULL;
	tmp = malloc(sizeof(char) * 1);
	ret = get_file_loop(fd, &tmp, &tmp2);
	tmp[ft_strlen(tmp) + 1] = '\0';
	*line = malloc(sizeof(char) * (ft_strlen(tmp) + 2));
	if (*line == NULL)
		return (-1);
	*line = ft_strdup(tmp);
	if (tmp == NULL)
		free(tmp);
	if (tmp2 == NULL)
		free(tmp2);
	return (ret);
}

int	get_file_loop(int fd, char **tmp, char **tmp2)
{
	int		ret;
	char	buf[1]; 
	int		i;

	i = 0;
	ret = read(fd, buf, 1);
	while (ret > 0 && buf[0] != '\0')
	{
		(*tmp2) = malloc(sizeof(char) * (i + 2));
		if ((*tmp2) == NULL)
			return (-1);
		ft_strcat((*tmp2), *tmp);
		(*tmp2)[i] = buf[0];
		(*tmp2)[i + 1] = '\0';
		free(*tmp);
		*tmp = malloc(sizeof(char) * (i + 2));
		if (*tmp == NULL)
			return (-1);
		ft_strcat(*tmp, (*tmp2));
		free(*tmp2);
		ret = read(fd, buf, 1);
		i++;
	}
	return (ret);
}*/
