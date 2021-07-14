/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ascotto- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/09 21:44:09 by ascotto-          #+#    #+#             */
/*   Updated: 2021/07/12 11:46:57 by ascotto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	j;
	int	len;
	int	*array;

	if (min >= max)
	{
		return (0);
		*range = NULL;
	}
	i = min;
	len = (max - min);
	j = 0;
	array = malloc(len * sizeof(int));
	if (!array)
		return (-1);
	i = min;
	while (i < max)
	{
		array[j] = i;
		j++;
		i++;
	}
	*range = array;
	return (len);
}
