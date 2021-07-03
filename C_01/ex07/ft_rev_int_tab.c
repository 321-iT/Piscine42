/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ascotto- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/01 20:13:40 by ascotto-          #+#    #+#             */
/*   Updated: 2021/07/01 21:37:47 by ascotto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap2(int *a, int *b)
{
	int	c;

	c = *a;
	*a = *b;
	*b = c;
}

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	taille;

	i = 0;
	if (size % 2 != 0)
		taille = size - 1;
	else
		taille = size;
	while (i < taille / 2)
	{
		ft_swap2(&tab[i], &tab[size - (i + 1)]);
		i++;
	}
}
