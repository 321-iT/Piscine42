/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpol <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/17 14:25:34 by rpol              #+#    #+#             */
/*   Updated: 2021/07/18 18:10:09 by ascotto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "kayak.h"

int	check_arg(int ac)
{
	if (ac < 2 )
	{
		ft_putstr_error("Too less arguments.\n");
		return (-1);
	}
	if (ac > 3 )
	{
		ft_putstr_error("Too many arguments.\n");
		return (-1);
	}
	return (1);
}

int	check_non_valid_caracter(int ac, char **av)
{
	int	i;

	i = 0;
	while (av[ac - 1][i])
	{
		if (av[ac - 1][i] < '0' || av[ac - 1][i] > '9' )
		{
			ft_putstr_error("Error, unvalid integer\n");
			return (-1);
		}
		i++;
	}
	if (i == 0)
	{
		ft_putstr_error("Error, unvalid integer\n");
		return (-1);
	}
	return (1);
}

int	check_open(int ac, char **av)
{
	int	fd;

	if (ac > 2)
		fd = open(av[1], O_RDONLY);
	else
		fd = open("numbers.dict", O_RDONLY);
	if (fd == -1)
	{
		ft_putstr_error("cannot open Dictionary.\n");
		return (-1);
	}
	close(fd);
	return (1);
}

int	check_zero(int ac, char **av)
{
	int	i;
	int	j;

	i = 0;
	j = -1;
	if (av[ac - 1][0] == '0')
	{
		while (av[ac - 1][i] == '0')
			i++;
		if (i == ft_strlen(av[ac - 1]))
		{
			ft_putstr("zero\n");
			return (-1);
		}
		while (av[ac - 1][j + i])
		{
			av[ac - 1][j] = av[ac - 1][j + i];
			j++;
		}
		while (av[ac - 1][j])
			av[ac - 1][++j - 1] = '\0';
	}
	return (1);
}

int	input_check(int ac, char **av)
{
	if (check_arg(ac) == -1 || check_non_valid_caracter(ac, av) == -1
		|| check_zero(ac, av) == -1)
		return (-1);
	return (check_open(ac, av));
}
