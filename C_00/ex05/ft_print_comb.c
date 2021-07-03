/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ascotto- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/30 16:50:26 by ascotto-          #+#    #+#             */
/*   Updated: 2021/07/01 13:21:15 by ascotto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print789(int a, int b, int c)
{
	ft_putchar(a + 48);
	ft_putchar(b + 48);
	ft_putchar(c + 48);
	ft_putchar(',');
	ft_putchar(' ');
}

void	ft_print_last789(void)
{
	ft_putchar(7 + 48);
	ft_putchar(8 + 48);
	ft_putchar(9 + 48);
}

void	ft_print_comb(void)
{
	int		a;
	int		b;
	int		c;

	a = 0;
	b = 1;
	c = 2;
	while (a < 7 && b <= 8 && c <= 9)
	{
		ft_print789(a, b, c);
		c++;
		if (c > 9)
			c = ++b + 1;
		if (b > 8)
		{
			a++;
			b = a + 1;
			c = b + 1;
		}
	}
	ft_print_last789();
}
