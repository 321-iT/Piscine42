/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ascotto- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/10 17:14:55 by ascotto-          #+#    #+#             */
/*   Updated: 2021/07/11 17:56:11 by ascotto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

void	print_table(int **tab);
int		backtracking(int **tab, int index, int *str);
int		check_double(int **tab, int index, int nbr);
int		check_view(int **tab, int *str);

int main(int argc, char **argv)
{
	if (argc != 2)
		return (0);
	
	int	**tab;
	int i;
	int k;
	int	*str;

	i = 0;
	k = 0;
	tab = malloc(sizeof(int *) * 4);
	str = malloc(sizeof(int) * 16);
	while (i < 16)
	{
		str[i] = argv[1][k] - 48;
		k = k + 2;
		i++;
	}	
	i = 0;
	while (i < 4)
	{
		tab[i] = malloc(4 * sizeof(int));
		i++;
	}

	i = 0;
	while (i < 16)
	{
		tab[i / 4][i % 4] = 0;
		i++;
	}

	//////////////////////////////
	

	if (backtracking(tab, 0, str))
		print_table(tab);

	free(tab);
}
