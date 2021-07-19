/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ascotto- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/18 10:45:35 by ascotto-          #+#    #+#             */
/*   Updated: 2021/07/18 23:38:54 by ascotto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <fcntl.h>
#include "kayak.h"

int	main(int argc, char **argv)
{
	unsigned int	line_count;
	unsigned int	letter_count;
	char			*str;
	char			**tab_split;
	t_line			*struct_tab;

	if (input_check(argc, argv) < 1)
		return (-1);
	line_count = ft_line_count_open(argc, argv, &letter_count);
	str = ft_read_in_str(letter_count, argv[1]);
	tab_split = ft_split(str, "'\n'", argc, argv);
	struct_tab = ft_char_to_struct(tab_split, line_count);
	if (argc > 2)
		ft_display_value(struct_tab, argv[2]);
	else
		ft_display_value(struct_tab, argv[1]);
	return (0);
}	
