/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ascotto- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/21 17:18:28 by ascotto-          #+#    #+#             */
/*   Updated: 2021/07/21 20:18:35 by ascotto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "kayak.h"

void	ft_display(char **tab_split)
{
	int	i;

	i = 1;
	while (tab_split[i])
	{
		write(1, tab_split[i], ft_strlen(tab_split[i]));
		write(1, "\n", 1);
		i++;
	}
	free(tab_split[i]);
}
