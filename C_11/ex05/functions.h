/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ascotto- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/19 16:13:58 by ascotto-          #+#    #+#             */
/*   Updated: 2021/07/19 17:26:03 by ascotto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FUNCTIONS_H
# define FUNCTIONS_H

# include <unistd.h>
void	ft_putchar(char n);
void	ft_putnbr(int nb);
void	ft_putstr(char *str);
void	ft_plus(int a, int b);
void	ft_minus(int a, int b);
void	ft_mult(int a, int b);
void	ft_div(int a, int b);
void	ft_mod(int a, int b);
int		ft_atoi(char *str);
int		ft_strlen(char *str);
#endif
