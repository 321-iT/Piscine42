/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions_2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpol <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/18 11:39:13 by rpol              #+#    #+#             */
/*   Updated: 2021/07/18 22:38:03 by mchassig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "kayak.h"

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] || s2[i])
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}

void	ft_swap_int(int *a, int *b)
{
	int	c;

	c = *a ;
	*a = *b ;
	*b = c ;
}

void	ft_swap_char(char *a, char *b)
{
	char	c;

	c = *a ;
	*a = *b ;
	*b = c ;
}

int	ft_line_count(int fd, unsigned int *letter_count)
{
	char	buf;
	char	c;
	int		ret;
	int		line_count;

	line_count = 0;
	buf = '\n';
	ret = read(fd, &c, 1);
	while (ret != 0)
	{
		if (c == '\n' && buf != '\n')
			line_count++;
		buf = c;
		ret = read(fd, &c, 1);
		*letter_count = *letter_count + 1;
	}
	return (line_count);
}

int	ft_line_count_open(int ac, char **av, unsigned int *letter_count)
{
	int	fd;
	int	line_count;

	if (ac > 2)
		fd = open(av[1], O_RDONLY);
	else
		fd = open("numbers.dict", O_RDONLY);
	if (fd == -1)
	{
		ft_putstr_error("Dictionary openning Error\n");
		return (-1);
	}
	line_count = ft_line_count(fd, letter_count);
	close(fd);
	if (line_count == 0)
		ft_putstr_error("Error, empty dictionary\n");
	return (line_count);
}
