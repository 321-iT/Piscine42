/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ascotto- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/16 13:59:10 by ascotto-          #+#    #+#             */
/*   Updated: 2021/07/18 22:38:37 by mchassig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "kayak.h"

int	is_in_charset(char n, char *charset)
{
	int	i;

	i = 0;
	while (charset[i])
	{
		if (charset[i] == n)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_cut(int *i, char *str, int size)
{
	int		j;
	char	*tab;

	tab = malloc(sizeof(char) * size + 1);
	if (!tab)
		return (NULL);
	j = 0;
	while (j < size)
	{
		tab[j] = str[*i];
		j++;
		*i = *i + 1;
	}
	tab[size] = '\0';
	return (tab);
}

char	**ft_split(char *str, char *charset, int ac, char **av)
{
	int					i;
	unsigned int		j;
	int					l;
	char				**result;

	i = 0;
	l = 0;
	result = malloc(sizeof(char *) * (ft_line_count_open(ac, av, &j) + 1));
	if (!(result) || ft_line_count_open(ac, av, &j) < 1)
		return (NULL);
	result[ft_line_count_open(ac, av, &j)] = NULL;
	while (str[i])
	{
		if (is_in_charset(str[i], charset) == 0 && str[i])
		{
			j = 0;
			while (is_in_charset(str[i + j], charset) == 0 && str[i + j])
				j++;
			result[l] = ft_cut(&i, str, j);
			l++;
		}
		else
			i++;
	}
	return (result);
}
