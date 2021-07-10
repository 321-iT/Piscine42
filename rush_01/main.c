/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ascotto- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/10 17:14:55 by ascotto-          #+#    #+#             */
/*   Updated: 2021/07/10 22:54:06 by ascotto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

void	print_table(int **tab);
void	backtracking(int **tab, int y, int x, char *str);
int		check_double(int **tab, int index, int nbr);

int main(int argc, char **argv)
{
	if (argc != 2)
		return (0);
	
	int	**tab;
	int i;

	i = 0;
	tab = malloc(sizeof(int *) * 4);
	
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
	
	backtracking(tab, 0, 0, argv[1]);
	print_table(tab);
	
	free(tab);
}
