/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   backtracking.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ascotto- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/10 17:37:35 by ascotto-          #+#    #+#             */
/*   Updated: 2021/07/11 18:49:10 by ascotto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
int		check_double(int **tab, int index, int nbr);
void	print_table(int **tab);
int		check_view(int **tab, int *str, int index);

int	backtracking(int **tab, int index, int *str)
{
	int	i;
	int	nb;

	i = index;
	if (i == 16)
		return (1);
	nb = 1;	
	while (nb < 5)
	{
		tab[i / 4][i % 4] = nb;
		if (check_double(tab, i, nb) == 0 && check_view(tab, str, i))
		{
			printf("Ici on valide la condition avec	index = %d, nb = %d\n", i, nb);
			print_table(tab);
			if (backtracking(tab, i + 1, str) == 1)
				return (1);
		}
		nb++;
	}
	tab[i / 4][i % 4] = 0;
	return(0);	
}
