/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpiamias <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/11 20:46:03 by vpiamias          #+#    #+#             */
/*   Updated: 2021/07/11 20:48:25 by vpiamias         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int	**ft_malloctabint(void)
{
	int		i;
	int		**tab;

	i = 0;
	tab = malloc(sizeof(int *) * (4));
	if (!tab)
		return (NULL);
	while (i < 4)
	{
		tab[i] = malloc(sizeof(int) * 4);
		if (!tab[i])
			return (NULL);
		i++;
	}
	return (tab);
}

int	recurs(int **condition, int **tab, int index)
{
	int		col;
	int		row;
	int		i;

	col = index % 4;
	row = index / 4;
	if (index == 16)
		return (1);
	i = 1;
	while (i <= 4)
	{
		tab[row][col] = i;
		if (ft_totalcheck(condition, tab, index, i) == 1)
		{
			if (recurs(condition, tab, index + 1))
				return (1);
		}
		i++;
	}
	return (0);
}

int	main(int argc, char **argv)
{
	int		**condition;
	int		**tab;
	int		index;

	condition = NULL;
	tab = NULL;
	index = 0;
	if (argc == 2)
	{
		if (ft_argvchecker(argv[1]) == 0)
		{
			ft_error();
			return (0);
		}
		condition = ft_malloctabint();
		condition = ft_fillcondition(condition, argv[1]);
		tab = ft_malloctabint();
		if ((recurs(condition, tab, index)) == 1)
			ft_printtable(tab);
		else
			ft_error();
		ft_free(tab, condition);
	}
	else
		ft_error();
}
