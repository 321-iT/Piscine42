/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ascotto- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/06 18:43:41 by ascotto-          #+#    #+#             */
/*   Updated: 2021/07/06 22:27:22 by ascotto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar4(char n)
{
	write(1, &n, 1);
}

unsigned int	ft_strlen4(char *str)
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

void	ft_putnbr_base(int nbr, char *base)
{
	unsigned int	i;
	unsigned int	lenchain;

	i = 0;
	if (ft_checkbase(base) == 0)
		return ;
	lenchain = ft_strlen4(base);
	if (nbr < 0)
	{
		ft_putchar4('-');
		i = -nbr;
	}
	else
		i = nbr;
	if (i > lenchain - 1)
	{
		ft_putnbr_base(i / lenchain, base);
		i = i % lenchain;
	}
	ft_putchar4(base[i]);
}
