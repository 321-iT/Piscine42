/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ascotto- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/12 14:37:40 by ascotto-          #+#    #+#             */
/*   Updated: 2021/07/13 17:05:05 by ascotto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

unsigned int	ft_strlen4(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_len_number(int nb)
{
	int	i;
	int	j;

	j = 0;
	if (nb < 0)
		i = -nb;
	else
		i = nb;
	while (i > 0)
	{
		i = i / 10;
		j++;
	}
	return (j);
}

void	ft_rev_str(char *str, int size)
{
	int					i;
	unsigned int		len;
	char				tmp;
	int					taille;

	i = 0;
	len = size - 1;
	if (size % 2 != 0)
		taille = size - 1;
	else
		taille = size;
	while (i < taille / 2)
	{
		tmp = str[i];
		str[i] = str[len];
		str[len] = tmp;
		i++;
		len--;
	}
}

int	ft_checkbase(char *base)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (base[0] == '\0' || ft_strlen4(base) == 1)
		return (0);
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-'
			|| (base[i] >= 9 && base[i] <= 13) || base[i] == 32)
			return (0);
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	write_nbr_base(unsigned int nbr, char *base, char *str, int j)
{
	unsigned int	i;
	unsigned int	lenchain;

	i = nbr;
	lenchain = ft_strlen4(base);
	if (i >= lenchain)
	{
		write_nbr_base(i / lenchain, base, str, j + 1);
		i = i % lenchain;
	}
	str[j] = base[i];
	return ;
}
