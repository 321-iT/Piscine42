/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ascotto- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/13 14:25:31 by ascotto-          #+#    #+#             */
/*   Updated: 2021/07/16 00:54:10 by ascotto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen5(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

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

int	word_count(char *str, char *charset)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i])
	{
		if (is_in_charset(str[i], charset) == 0)
		{
			count++;
			while (is_in_charset(str[i], charset) == 0 && str[i])
				i++;
		}
		else
			i++;
	}
	return (count);
}

char	**ft_split(char *str, char *charset)
{
	int		i;
	int		j;
	int		l;
	char	**tab;

	i = 0;
	l = 0;
	tab = malloc(sizeof(char *) * word_count(str, charset) + 1);
	if (!tab)
		return (NULL);
	tab[word_count(str, charset)] = NULL;
	while (str[i])
	{
		if (is_in_charset(str[i], charset) == 0)
		{
			j = 0;
			while (is_in_charset(str[i + j], charset) == 0 && str[i + j])
				j++;
			tab[l] = ft_cut(&i, str, j);
			l++;
		}
		else
			i++;
	}
	return (tab);
}
