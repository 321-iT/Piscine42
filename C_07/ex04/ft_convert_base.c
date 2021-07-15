/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ascotto- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/12 14:37:40 by ascotto-          #+#    #+#             */
/*   Updated: 2021/07/15 17:24:23 by ascotto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen4(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
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

char	*ft_strcat(char *dest, char src)
{
	int	i;

	i = 0;
	while (dest[i] != '\0')
		i++;
	dest[i] = src;
	i++;
	dest[i] = '\0';
	return (dest);
}

void	write_nbr_base(int nbr, char *base, char *buffer)
{
	unsigned int	i;
	unsigned int	lenchain;

	i = 0;
	lenchain = ft_strlen4(base);
	if (nbr < 0)
	{
		buffer[0] = '-';
		i = -nbr;
	}
	else
		i = nbr;
	if (i > lenchain - 1)
	{
		write_nbr_base(i / lenchain, base, buffer);
		i = i % lenchain;
	}
	ft_strcat(buffer, base[i]);
}
