/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ascotto- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/30 20:34:07 by ascotto-          #+#    #+#             */
/*   Updated: 2021/07/01 18:17:19 by ascotto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	f_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_last_char(void)
{
	f_putchar('9');
	f_putchar('8');
	f_putchar(' ');
	f_putchar('9');
	f_putchar('9');
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 00;
	b = 01;
	while (a < 99)
	{
		if (a == 98)
		{
			ft_print_last_char();
			break ;
		}
		f_putchar(a / 10 + 48);
		f_putchar(a % 10 + 48);
		f_putchar(' ');
		f_putchar(b / 10 + 48);
		f_putchar(b % 10 + 48);
		f_putchar(',');
		f_putchar(' ');
		if (++b == 100)
			b = ++a + 1;
	}
}

int	main(void)
{
	ft_print_comb2();
}
