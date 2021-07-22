/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   kayak.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ascotto- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/20 11:29:38 by ascotto-          #+#    #+#             */
/*   Updated: 2021/07/22 10:58:18 by ascotto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef KAYAK_H
# define KAYAK_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <fcntl.h>
# define BUF_SIZE 8000000

typedef struct s_answer
{
	int	x;
	int	y;
	int	value;
}	t_answer;

char		**ft_split(char *str, char *charset);
char		*ft_joinRobin(char *str1, char *str2);
int			ft_main(int fd);
char		*ft_filedup(int fd);
int			ft_check_str(char *str);
int			ft_lc(char *str);
int			ft_line_count_strs(char **strs);
int			ft_error(void);
int			ft_check_tab_split(char **tab_split);
int			**ft_init_tab(char **strs);
void		ft_put_answer(char **strs, t_answer ans);
t_answer	ft_solve(int **tab, char **strs);
void		ft_display(char **str);

void		ft_putstr_error(char *str);
int			ft_strcmp(char *s1, char *s2);
void		ft_putstr(char	*str);
void		ft_putchar(char c);
int			ft_strlen(char *str);
int			ft_atoi_count(char *str, int count);
int			ft_len_number(int nbr);
#endif 
