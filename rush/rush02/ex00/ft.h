/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asuc <asuc@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 13:33:56 by asuc              #+#    #+#             */
/*   Updated: 2023/07/31 16:34:25 by asuc             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H

# include <unistd.h>
# include <fcntl.h>
# include <stdlib.h>

typedef struct s_dict
{
	int		index;
	char	*str;
}	t_dict;

int		ft_recursive_power(int nb, int power);
char	*ft_real_strdup(char *src);
int		search_in_charset(char c, char *charset);
char	*ft_strdup(char *src, char *charset);
int		count_word(char *str, char *charset);
char	**ft_split(char *str, char *charset);
char	*ft_strncat(char *dest, char *src, unsigned int nb);
int		get_next_line(int const fd, char **line);
int		check_open(char *name);
int		open_append(char ***s1);
void	ft_putstr(char *str);
int		ft_strlen(char *str);
int		*ft_putnbr_rec(long long nbr, int *array, int depth);
int		all_len(long long nbr);
int		*ft_putnbr(long long nbr);
int		ft_write(char ***s1, int fd);
char	*ft_strcpy(char *dest, char *src);
int		ft_strlen(char *str);
t_dict	to_struct(char **tab2);
void	struct_file(char **tab, t_dict	**s1);
long	ft_atoi(char *str);
int		ft_print_thousand(t_dict *s1, int selected_nbr, int *nbr);
int		ft_print_units(t_dict *s1, int *nbr, int selected_nbr, int len);
int		ft_print_hundreds(t_dict *s1, int *nbr, int selected_nbr, int len);
int		ft_print_tens(t_dict *s1, int *nbr, int selected_nbr);
void	print_number(t_dict *s1, int tab_len, int *nbr);
int		ft_print_special(t_dict *s1, int *nbr, int selected_nbr);
void	free_all(int line, char	***test2, t_dict **s1, int **tab);
int		ft_print_zero(t_dict *s1);

#endif
