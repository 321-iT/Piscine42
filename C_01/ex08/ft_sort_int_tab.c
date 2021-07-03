/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ascotto- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/01 21:41:16 by ascotto-          #+#    #+#             */
/*   Updated: 2021/07/01 22:21:22 by ascotto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap3(int *a, int *b)
{
	int	c;

	c = *a;
	*a = *b;
	*b = c;
}

void	ft_sort_int_tab(int *tab, int size)
{	
	int	a;
	int	b;

	a = 0;
	b = 0;
	while (a < size)
	{
		b = 0;
		while (b < size)
		{	
			if (tab[a] < tab[b])
			{
				ft_swap3(&tab[a], &tab[b]);
			}
			b++;
		}
		a++;
	}
}
