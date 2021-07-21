/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ascotto- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/20 11:03:59 by ascotto-          #+#    #+#             */
/*   Updated: 2021/07/22 00:34:01 by ascotto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "kayak.h"
#include <stdio.h>

int	main(int argc, char **argv)
{
	char				*str;
	int					fd;
	int					i;
	char				**tab_split;
	int					**tab_int;

	i = 0;
	while (i < argc)
	{
		if (argc == 1)
			fd = 0;
		else
		{
			i++;
			fd = open(argv[i], O_RDONLY);
		}
		if (fd > -1)
		{
			str = ft_filedup(fd);
			if (ft_check_str(str) == -1)
				return (ft_error());
			tab_split = ft_split(str, "\n");
			if (ft_check_tab_split(tab_split) == -1)
				return (ft_error());
			tab_int = ft_init_tab(tab_split);
			ft_put_answer(tab_split, ft_solve(tab_int, tab_split));
			ft_display(tab_split);
		}
		if (i + 1 < argc)
			write(1, "\n", 1);
		i++;
	}
}
