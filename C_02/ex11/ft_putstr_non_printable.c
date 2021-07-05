/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ascotto- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/04 16:28:38 by ascotto-          #+#    #+#             */
/*   Updated: 2021/07/04 23:09:00 by ascotto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void	ft_putchar(char n)
{
	write(1, &n, 1);
}

char	*ft_strcpy2(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

void	ft_putstr_non_printable(char *str)
{
	char	base_hexa[16];

	ft_strcpy2(base_hexa, "0123456789abcdef");
	while (*str)
	{
		if (*str < 32 || *str > 126)
		{
			ft_putchar('\\');
			ft_putchar(base_hexa[*str / 16]);
			ft_putchar(base_hexa[*str % 16]);
			str++;
		}
		else
		{
			ft_putchar(*str);
			str++;
		}
	}
}
