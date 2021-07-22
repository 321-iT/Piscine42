/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_solve.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ascotto- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/21 12:07:51 by ascotto-          #+#    #+#             */
/*   Updated: 2021/07/22 11:20:09 by ascotto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "kayak.h"

int	ft_sum(int **tab, int i, int j)
{
	int	min;

	min = 2147483647;
	if (tab[i - 1][j - 1] < min)
		min = tab[i - 1][j - 1];
	if (tab[i][j - 1] < min)
		min = tab[i][j - 1];
	if (tab[i - 1][j] < min)
		min = tab[i - 1][j];
	return (min + 1);
}

t_answer	ft_check_solution(t_answer solution, int **tab, char **strs)
{
	int	i;
	int	j;

	i = 0;
	if (solution.value <= 1)
	{
		while (i < ft_line_count_strs(strs))
		{
			j = 0;
			while (j < ft_strlen(strs[1]))
			{
				if (tab[i][j] == 1)
				{
					solution.value = 1;
					solution.x = i;
					solution.y = j;
					return (solution);
				}
				j++;
			}
			i++;
		}
	}
	return (solution);
}

t_answer	ft_solve(int **tab, char **strs)
{
	int			i;
	int			j;
	t_answer	solution;

	i = 0;
	solution.value = 0;
	while (++i < ft_line_count_strs(strs) - 1)
	{
		j = 0;
		while (++j < ft_strlen(strs[1]))
		{
			if (tab[i][j] != 0)
			{
				tab[i][j] = ft_sum(tab, i, j);
				if (solution.value < tab[i][j])
				{
					solution.value = tab[i][j];
					solution.x = i;
					solution.y = j;
				}
			}
		}
	}
	return (ft_check_solution(solution, tab, strs));
}
