/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ops.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ascotto- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/19 15:56:26 by ascotto-          #+#    #+#             */
/*   Updated: 2021/07/19 16:34:28 by ascotto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "functions.h"

void	ft_plus(int a, int b)
{
	int	result;

	result = a + b;
	ft_putnbr(result);
	ft_putchar('\n');
}

void	ft_minus(int a, int b)
{
	int	result;

	result = a - b;
	ft_putnbr(result);
	ft_putchar('\n');
}

void	ft_mult(int a, int b)
{
	int	result;

	result = a * b;
	ft_putnbr(result);
	ft_putchar('\n');
}

void	ft_div(int a, int b)
{
	int	result;

	if (b == 0)
	{
		ft_putstr("Stop : division by zero\n");
		return ;
	}
	result = a / b;
	ft_putnbr(result);
	ft_putchar('\n');
}

void	ft_mod(int a, int b)
{
	int	result;

	if (b == 0)
	{
		ft_putstr("Stop : modulo by zero\n");
		return ;
	}
	result = a % b;
	ft_putnbr(result);
	ft_putchar('\n');
}
