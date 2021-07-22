/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ascotto- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/20 11:03:59 by ascotto-          #+#    #+#             */
/*   Updated: 2021/07/22 11:30:48 by ascotto-         ###   ########.fr       */
/*   Updated: 2021/07/22 10:18:58 by ascotto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "kayak.h"
#include <stdio.h>

int	main(int argc, char **argv)
{
	int					fd;
	int					i;

	if (argc == 1)
	{
		if (ft_main(0) == 0)
			return (ft_error());
		return (0);
	}
	i = 1;
	while (i < argc)
	{
		fd = open(argv[i], O_RDONLY);
		if (fd == -1)
			return (ft_error());
		if (ft_main(fd) == 0)
			ft_error();
		i++;
		if (i < argc)
			write(1, "\n", 1);
	}
}

int	ft_main(int fd)
{
	char	*str;
	char	**tab_split;
	int		**tab_int;
	int		i;

	i = -1;
	str = ft_filedup(fd);
	if (!str)
		return (0);
	if (ft_check_str(str) == -1)
		return (0);
	tab_split = ft_split(str, "\n");
	if (ft_check_tab_split(tab_split) == -1)
		return (0);
	tab_int = ft_init_tab(tab_split);
	ft_put_answer(tab_split, ft_solve(tab_int, tab_split));
	ft_display(tab_split);
	while (++i < ft_lc(str))
		free(tab_int[i]);
	free(str);
	free(tab_int);
	return (1);
}
