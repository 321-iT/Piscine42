/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_tab_str.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ascotto- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/20 21:13:00 by ascotto-          #+#    #+#             */
/*   Updated: 2021/07/22 00:01:44 by ascotto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "kayak.h"
int	ft_check_tab_split(char **tab_split)
{
	int	i;
	int	len_first_line;

	i = 1;
	len_first_line = ft_strlen(tab_split[i]);
	while (tab_split[i])
	{
		if (ft_strlen(tab_split[i]) != len_first_line)
		{
			ft_putstr_error("Map error\n");
			return (-1);
		}
		i++;
	}
	return (0);
}
