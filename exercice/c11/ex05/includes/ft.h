/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asuc <asuc@student.42angouleme.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 13:31:00 by asuc              #+#    #+#             */
/*   Updated: 2023/08/03 22:35:04 by asuc             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H

# include <unistd.h>

int		main(int argc, char **argv);
int		mul(int a, int b);
int		add(int a, int b);
int		div(int a, int b);
int		mod(int a, int b);
int		sub(int a, int b);
int		ft_atoi(char *str);
int		ft_str_is_numeric(char *str);
int		ft_strlen(char *str);
int		check_is_ope(char *op);
void	set_all_fonc(int (*(*all_fonc)[])(int, int));
void	do_op(int a, int b, char *c, int (*all_fonc[])(int, int));
int		check_arg(char **arg);
void	ft_putnbr(int nb);

#endif