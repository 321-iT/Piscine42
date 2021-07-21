/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_str.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ascotto- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/20 18:20:44 by ascotto-          #+#    #+#             */
/*   Updated: 2021/07/22 00:17:03 by ascotto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "kayak.h"

#include <stdio.h>
int	is_valid_char(char n, char *charset)
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

int	ft_check_validity(char *str, char *charset)
{
	int	i;

	i = ft_len_number(ft_lc(str));
	while (str[i])
	{
		if (is_valid_char(str[i], charset) == 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_lc(char *str)
{
	char	tmp;
	int		i;
	int		count;

	count = 0;
	i = 0;
	while (str[i])
	{
		tmp = str[i];
		i++;
		if (str[i] == '\n' && tmp != '\n')
			count++;
	}
	return (count - 1);
}

int	ft_check_str(char *str)
{
	char	charset[5];
	int		i;
	int		j;

	j = 0;
	charset[3] = '\n';
	charset[4] = '\0';
	i = ft_len_number(ft_lc(str));
	if (ft_atoi_count(str, ft_len_number(ft_lc(str))) != ft_lc(str))
		return (-1);
	while (j < 3)
	{
		charset[j] = str[i];
		j++;
		i++;
	}
	if (str[i] != '\n' || ft_check_validity(str, charset) == 0)
		return (-1);
	return (0);
}
