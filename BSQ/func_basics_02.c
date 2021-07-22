/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   func_basics_02.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ascotto- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/20 18:49:08 by ascotto-          #+#    #+#             */
/*   Updated: 2021/07/22 11:30:41 by ascotto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "kayak.h"

int	ft_line_count_strs(char	**strs)
{
	int	i;

	i = 0;
	while (strs[i])
		i++;
	return (i);
}

int	ft_len_number(int nbr)
{
	int	i;

	i = 0;
	while (nbr > 9)
	{
		nbr = nbr / 10;
		i++;
	}
	return (i + 1);
}

int	ft_error(void)
{
	ft_putstr_error("map error\n");
	return (0);
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s2[i])
	{
		if (s1[i] == s2[i])
			i++;
		else
			break ;
	}
	if ((s1[i] - s2[i]) < 0)
		return (-1);
	else if ((s1[i] - s2[i]) > 0)
		return (1);
	else
		return (0);
}
