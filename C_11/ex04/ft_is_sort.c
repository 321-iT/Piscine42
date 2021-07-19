/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ascotto- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/19 15:18:46 by ascotto-          #+#    #+#             */
/*   Updated: 2021/07/19 15:43:20 by ascotto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_sort(int *tab, int length, int(*f)(int, int))
{
	int	i;
	int	pos;
	int	neg;

	i = 0;
	pos = 0;
	neg = 0;
	while (i < length - 1)
	{
		if (f(tab[i], tab[i + 1]) > 0)
			pos = 1;
		else if (f(tab[i], tab[i + 1]) < 0)
			neg = 1;
		if (pos == 1 && neg == 1)
			return (0);
		i++;
	}
	return (1);
}
