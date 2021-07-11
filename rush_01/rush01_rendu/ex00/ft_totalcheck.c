/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_totalcheck.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpiamias <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/11 20:48:16 by vpiamias          #+#    #+#             */
/*   Updated: 2021/07/11 20:48:19 by vpiamias         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int	ft_totalcheck(int **condition, int **tab, int index, int	value)
{
	if (ft_checkdouble(tab, index, value) == 0)
		return (0);
	if (index / 4 == 3)
	{
		if (ft_checkup(condition, tab, index) == 0)
			return (0);
		if (ft_checkdown(condition, tab, index) == 0)
			return (0);
	}
	if (index % 4 == 3)
	{
		if (ft_checkleft(condition, tab, index) == 0)
			return (0);
		if (ft_checkright(condition, tab, index) == 0)
			return (0);
	}
	return (1);
}
