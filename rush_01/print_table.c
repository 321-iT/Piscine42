/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_table.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpiamias <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/10 10:24:40 by vpiamias          #+#    #+#             */
/*   Updated: 2021/07/10 17:37:21 by ascotto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

void ft_putchar(char c)
{
	write (1, &c, 1);
}	

void	print_table(int **tab)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while(i < 4)
	{
		while(j < 4)
		{
			ft_putchar(tab[i][j] + 48);
			ft_putchar(' ');
			j++;
		}
		write(1, "\n", 1);
		j = 0;
		i++;
	}
}
