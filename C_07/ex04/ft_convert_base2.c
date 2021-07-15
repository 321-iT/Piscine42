/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ascotto- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/12 14:41:10 by ascotto-          #+#    #+#             */
/*   Updated: 2021/07/15 17:24:25 by ascotto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int				ft_checkbase(char *base);
void			ft_putnbr_base(int nbr, char *base, char *buffer);
int				ft_strlen4(char *str);
void			write_nbr_base(int nbre, char *base, char *buffer);

int	get_i_base(char n, char *base)
{
	int	i;

	i = 0;
	while (i < ft_strlen4(base))
	{
		if (base[i] == n)
			return (i);
		i++;
	}
	return (-1);
}

int	is_in_base(char n, char *base)
{
	int	i;

	i = 0;
	while (i < ft_strlen4(base))
	{
		if (base[i] == n)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strdup4(char *src)
{
	int		i;
	char	*dest;

	i = 0;
	dest = malloc((ft_strlen4(src) + 1) * sizeof(char));
	if (!dest)
		return (NULL);
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

long int	atoi_base(char *str, char *base)
{
	int			i;
	long int	res;
	int			neg;

	i = 0;
	res = 0;
	neg = 1;
	while (((str[i] >= 9 && str[i] <= 13) || str[i] == 32))
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			neg *= -1;
		i++;
	}
	while (str[i] && is_in_base(str[i], base))
	{
		res = res * ft_strlen4(base) + get_i_base(str[i], base);
		i++;
	}
	return (res * neg);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	long int	number;
	char		buffer[128];

	if (!ft_checkbase(base_from) || !(ft_checkbase(base_to)))
		return (NULL);
	number = atoi_base(nbr, base_from);
	buffer[0] = '\0';
	buffer[1] = '\0';
	printf("nombre en decimal = %ld\n", number);
	write_nbr_base(number, base_to, buffer);
	return (ft_strdup4(buffer));
}
