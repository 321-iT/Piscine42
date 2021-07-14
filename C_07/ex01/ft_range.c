/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ascotto- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/09 14:00:20 by ascotto-          #+#    #+#             */
/*   Updated: 2021/07/09 15:12:05 by ascotto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	j;
	int	len;
	int	*array;

	if (min >= max)
		return (NULL);
	i = min;
	len = 0;
	j = 0;
	while (i++ < max)
		len++;
	array = malloc(len * sizeof(int));
	if (!array)
		return (NULL);
	i = min;
	while (i < max)
	{
		array[j] = i;
		j++;
		i++;
	}
	return (array);
}
