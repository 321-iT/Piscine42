/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdubois <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/20 18:45:40 by pdubois           #+#    #+#             */
/*   Updated: 2021/07/22 09:55:51 by pdubois          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "kayak.h"

void	ft_place_nbr(int **tab, int char_per_line, char	**strs, int	nbr_line)
{
	int	i;
	int	j;
	int	len_nbr;

	len_nbr = ft_len_number(nbr_line);
	i = 0;
	while (i < nbr_line)
	{
		j = 0;
		while (j < char_per_line)
		{
			if (strs[i + 1][j] == strs[0][len_nbr])
				tab[i][j] = 1;
			else if (strs[i + 1][j] == strs[0][len_nbr + 1])
				tab[i][j] = 0;
			j++;
		}
		i++;
	}
}

int	**ft_init_tab(char	**strs)
{
	int	**tab;
	int	i;
	int	nbr_line;
	int	char_per_line;

	char_per_line = ft_strlen(strs[1]);
	nbr_line = ft_line_count_strs(strs) - 1;
	i = -1;
	tab = malloc(sizeof(int *) * nbr_line);
	if (tab == NULL)
		return (NULL);
	while (++i < nbr_line)
	{
		tab[i] = malloc(sizeof(int) * char_per_line);
		if (tab[i] == NULL)
			return (NULL);
	}
	ft_place_nbr(tab, char_per_line, strs, nbr_line);
	return (tab);
}
