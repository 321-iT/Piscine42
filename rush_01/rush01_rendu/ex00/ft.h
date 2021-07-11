/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpiamias <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/11 20:45:12 by vpiamias          #+#    #+#             */
/*   Updated: 2021/07/11 20:45:20 by vpiamias         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H
# include <stdlib.h>
# include <unistd.h>
void	ft_putchar(char c);
void	ft_error(void);
int		ft_argvchecker(char *str);
int		**ft_fillcondition(int **condition, char *str);
int		ft_totalcheck(int **condition, int **tab, int index, int	value);
int		ft_checkdouble(int **tab, int index, int value);
int		ft_checkup(int	**condition, int **tab, int index);
int		ft_checkdown(int **condition, int **tab, int index);
int		ft_checkleft(int	**condition, int **tab, int index);
int		ft_checkright(int	**condition, int **tab, int index);
void	ft_printtable(int **tab);
void	ft_free(int **tab, int **condition);
#endif
