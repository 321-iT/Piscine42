/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpiamias <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/11 20:47:42 by vpiamias          #+#    #+#             */
/*   Updated: 2021/07/11 20:47:44 by vpiamias         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	ft_free(int **tab, int **condition)
{
	int		i;

	i = 0;
	while (i < 4)
	{
		free(tab[i]);
		free(condition[i]);
		i++;
	}
	free(tab);
	free(condition);
}
