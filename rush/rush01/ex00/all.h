/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   all.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bedarenn <bedarenn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 19:35:40 by bedarenn          #+#    #+#             */
/*   Updated: 2023/07/23 11:32:30 by bedarenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ALL_H
# define ALL_H

# include <stdio.h>

void	ft_putchar(char c);
void	ft_putstr(char *str);
int		ft_strlen(char *str);

int		check_arg_column_top(int **tab, int **arg, int coord, int size);
int		check_arg_column_bot(int **tab, int **arg, int coord, int size);
int		check_arg_line_left(int **tab, int **arg, int coord, int size);
int		check_arg_line_right(int **tab, int **arg, int coord, int size);
int		check_occ(int **tab, int size, int coord);

int		test_arg(char *av);
int		**free_tab(int **tab, int size);
int		**malloc_arg(char *av, int size);
int		**malloc_tab(int size);

void	ft_print_tab(int **tab, int size);
void	ft_print_tab_arg(int **tab, int **arg, int size);

int		algo(int **tab, int **arg, int size, int coord);

#endif