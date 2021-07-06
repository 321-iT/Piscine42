/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ascotto- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/06 12:44:38 by ascotto-          #+#    #+#             */
/*   Updated: 2021/07/06 12:56:05 by ascotto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar1(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	unsigned int	i;

	if (nb < 0 && nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (nb < 0)
	{
		ft_putchar1('-');
		i = -nb;
	}
	else
		i = nb;
	if (i > 10)
	{
		ft_putnbr(i / 10);
		i = i % 10;
	}
	ft_putchar1(i + '0');
}
