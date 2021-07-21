/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_answer.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdubois <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/21 10:23:51 by pdubois           #+#    #+#             */
/*   Updated: 2021/07/22 00:21:14 by ascotto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "kayak.h"

void	ft_put_answer(char **strs, t_answer ans)
{
	int	i;
	int	j;
	int	len_nbr;
	int	nbr_line;

	nbr_line = ft_line_count_strs(strs) - 1;
	len_nbr = ft_len_number(nbr_line);
	i = 0;
	while (i < ans.value)
	{
		j = 0;
		while (j < ans.value)
		{
			strs[ans.x - i + 1][ans.y - j] = strs[0][len_nbr + 2];
			j++;
		}
		i++;
	}
}
