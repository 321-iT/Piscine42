/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ascotto- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/13 14:25:31 by ascotto-          #+#    #+#             */
/*   Updated: 2021/07/14 11:17:33 by ascotto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

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
	while (i < ft_strlen5(charset))
	{
		if (charset[i] == n)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_cut(int i, char *str, char *charset)
{
	int		j;
	int		len;
	char	*tab;

	j = i;
	len = 0;
	if (!charset[0])
		return (str);
	while (!(is_in_charset(str[j], charset)) && j >= 0)
	{
		len++;
		j--;
	}
	tab = malloc(sizeof(char) * len);
	if (!tab)
		return (NULL);
	len = 0;
	while (!(is_in_charset(str[++j], charset)))
	{
		tab[len] = str[j];
		len++;
	}
	tab[len] = '\0';
	return (tab);
}

int	word_count(char *str, char *charset)
{
	int	i;
	int	count;
	int	j;

	i = 0;
	count = 0;
	while (str[i])
	{
		j = 0;
		if (is_in_charset(str[i], charset))
		{
			while (is_in_charset(str[i], charset))
			{
				i++;
				j++;
			}
			count++;
		}
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

	i = -1;
	l = -1;
	tab = malloc(sizeof(char *) * word_count(str, charset) + 1);
	if (!tab || !str[0])
		return (NULL);
	while (str[++i])
	{
		j = 0;
		if (is_in_charset(str[i], charset))
		{
			while (is_in_charset(str[i++], charset))
				j++;
			if ((--i - (j + 1) > 0))
				tab[++l] = ft_cut(i - (j + 1), str, charset);
		}
	}
	if (!(is_in_charset(str[i - 1], charset)))
		tab[++l] = ft_cut(i, str, charset);
	tab[++l] = 0;
	return (tab);
}
