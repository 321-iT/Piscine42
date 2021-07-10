/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   backtracking.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ascotto- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/10 17:37:35 by ascotto-          #+#    #+#             */
/*   Updated: 2021/07/10 22:54:12 by ascotto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		check_double(int **tab, int index, int nbr);
void	print_table(int **tab);
int		check_view(int **tab, char *str);

int	backtracking(int **tab, int index, int nbr, char *str)
{
	int	i;
	int	nb;

	i = index;
	nb = nbr;
	while (i < 16)
	{
		nb = 1;	
		while (nb < 5)
		{
			tab[i / 4][i % 4] = nb;
			if (check_double(tab, index, nb) == 0)
			{
				if(backtracking(tab, index + 1, 1, str) == 0)
					nb++;
			}
			else
				nb++;
		}
		i++; 
	}
	if (check_view(tab, str))
	{
		return (1);
		print_table(tab);
	}
	return (0);
}
