/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asuc <asuc@student.42angouleme.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 12:11:23 by asuc              #+#    #+#             */
/*   Updated: 2023/08/02 18:50:22 by asuc             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H

# include <unistd.h>
# include <fcntl.h>
# include <stdlib.h>
# include <stdio.h>

typedef struct s_param_tab
{
	int		width;
	int		length;
	char	empty;
	char	obstacle;
	char	full;

}	t_param_tab;

typedef struct s_coord_square
{
	int		x;
	int		y;
	int		size;

}	t_coord_square;

int			check_first_line(char *line, char **tab);
int			ft_strlen(char *str);
t_param_tab	to_struct(char *line);
int			get_next_line_loop(int fd, char	**tmp, char	**tmp2);
char		*ft_strcpy(char *dest, char *src);
char		**tab_update(t_coord_square square, t_param_tab param, char **tab);
int			check_open_file(char *file_name);
int			open_file(char *file_name, t_param_tab *param_tab, char	***tab);
int			main(int argc, char *argv[]);
void		ft_putstr(char *str);
int			get_next_line(int fd, char **line);
char		*ft_strcat(char *dest, char *src);
int			**tab_int_malloc(int length, int width);
char		*ft_strdup(char *src);
void		tab_set(int ***tab, t_param_tab param);
int			ft_char_is_printable(char c);
int			ft_char_is_numbers(char c);
int			ft_is_already(char c, char **tab);
char		**char_tab_update(
				t_coord_square square, t_param_tab param, char **tab);
int			ft_atoi(char *str);
int			write_in_tab(
				int fd, char ***tab, t_param_tab *param_tab, char **line);
int			check_in_tab(char **tab_check, t_param_tab param_tab, char **tab);
int			search_in_charset(char c, char *charset);
char		*ft_strdup_split(char *src, char *charset);
int			count_word(char *str, char *charset);
char		**ft_split(char *str, char *charset);
void		set_int_tab(
				t_param_tab param, t_coord_square *square, char **tab_char);
void		int_tab_update(int i, int j, int ***tab, t_coord_square *sqr);
void		ft_put_str_tab(char **tab, t_param_tab param);
void		init_char_tab(int len, char **tab);
int			free_all(t_param_tab s1, char ***tab);
int			bsq_file(char *argv);

#endif