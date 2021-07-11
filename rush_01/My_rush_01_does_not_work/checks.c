/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checks.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ascotto- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/10 20:52:32 by ascotto-          #+#    #+#             */
/*   Updated: 2021/07/11 17:56:14 by ascotto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
int	check_col(int **tab, int index, int nbr)
{
	int	x;
	int place;
	int	i;

	x = index / 4;
	place = index % 4;
	i = 0;
	while (i < 4)
	{
		if (tab[x][i] == nbr && i != place)
			return (1);
		else
			i++;
	}
	return (0);
}


int	check_row(int **tab, int index, int nbr)
{
	int	place;
	int y;
	int	i;

	place = index / 4;
	y = index % 4;
	i = 0;
	while (i < 4)
	{
		if (tab[i][y] == nbr && i != place)
			return (1);
		else
			i++;
	}
	return (0);
}

int	check_double(int **tab, int index, int nbr)
{
	if (check_row(tab, index, nbr) || check_col(tab, index, nbr))
		return (1);
	else
	{
		return (0);
	}
}
