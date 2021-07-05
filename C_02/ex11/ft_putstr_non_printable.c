/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ascotto- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/04 16:28:38 by ascotto-          #+#    #+#             */
/*   Updated: 2021/07/05 21:51:31 by ascotto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void	ft_putchar(char n)
{
	write(1, &n, 1);
}

void	ft_putstr_non_printable(char *str)
{
	const char	base_hexa[16] = "0123456789abcdef";

	while (*str)
	{
		if (*str < 32 || *str == 127)
		{
			ft_putchar('\\');
			ft_putchar(base_hexa[(unsigned char)*str / 16]);
			ft_putchar(base_hexa[(unsigned char)*str % 16]);
			str++;
		}
		else
		{
			ft_putchar(*str);
			str++;
		}
	}
}
