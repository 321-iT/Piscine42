/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_argvchecker.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpiamias <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/11 20:46:29 by vpiamias          #+#    #+#             */
/*   Updated: 2021/07/11 20:47:02 by vpiamias         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int	ft_strlen(char	*str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_argvchecker(char *str)
{
	int		i;

	i = 0;
	if (ft_strlen(str) != 31)
		return (0);
	while (str[i])
	{
		if (str[i] < '1' && str[i] > '4')
			return (0);
		i = i + 2;
	}
	i = 1;
	while (str[i])
	{
		if (str[i] != ' ')
			return (0);
		i = i + 2;
	}
	return (1);
}
