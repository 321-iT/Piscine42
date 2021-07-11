/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fillcondition.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpiamias <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/11 20:47:30 by vpiamias          #+#    #+#             */
/*   Updated: 2021/07/11 20:47:31 by vpiamias         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int	**ft_fillcondition(int **condition, char *str)
{
	int		i;
	int		j;
	int		k;

	i = 0;
	j = 0;
	k = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			condition[i][j] = str[k] - 48;
			j++;
			k = k + 2;
		}
		i++;
	}
	return (condition);
}	
