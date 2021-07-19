/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   kayak.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpol <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/18 11:01:59 by rpol              #+#    #+#             */
/*   Updated: 2021/07/18 23:24:38 by mchassig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef KAYAK_H
# define KAYAK_H
# include	<unistd.h>
# include	<fcntl.h>
# include	<stdlib.h>
typedef struct s_line	t_line;
struct s_line
{
	char	*key;
	int		key_len;
	char	*value;
};
int		input_check(int ac, char **av);
t_line	*ft_char_to_struct(char **split_tab, int size);
char	*ft_read_in_str(int letter_count, char *file_name);
int		ft_display_value(t_line *tab, char *input);
void	ft_putstr_error(char *str);
void	ft_putstr(char	*str);
void	ft_putchar(char c);
int		ft_strlen(char *str);
int		ft_strcmp(char *s1, char *s2);
void	ft_swap_int(int *a, int *b);
void	ft_swap_char(char *a, char *b);
/*split stuff*/
int		ft_line_count(int fd, unsigned int *letter_count);
int		ft_sep(t_line *tab, int len);
int		ft_triplet(t_line *tab, char *str, int size, int i);
int		ft_line_count_open(int ac, char **av, unsigned int *letter_count);
int		ft_find_key(char *to_find, int len, t_line *tab, int i);
int		ft_size_first_triplet(int len);
char	**ft_split(char *str, char *charset, int ac, char **av);
char	*ft_trim_key(char *str);
char	*ft_trim_value(char *str);

#endif
