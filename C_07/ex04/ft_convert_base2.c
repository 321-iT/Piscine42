/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ascotto- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/12 14:41:10 by ascotto-          #+#    #+#             */
/*   Updated: 2021/07/13 17:05:16 by ascotto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int			ft_checkbase(char *base);
int			ft_strlen4(char *str);
int			ft_len_number(int nb);
void		write_nbr_base(int nbr, char *base, char *str, int j);
int			get_i_base(char n, char *base);
long int	convert_in_decimal(char *str, char *base);
int			ft_len_number(int nb);
void		ft_rev_str(char *str, int size);

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	long int		number;
	char			*result;

	if (!(ft_checkbase(base_from)) || !(ft_checkbase(base_to)))
		return (NULL);
	number = convert_in_decimal(nbr, base_from);
	if (number < 0)
	{
		result = malloc(sizeof(char) * 100);
		result[0] = '-';
		write_nbr_base((number * -1), base_to, result, 1);
	}
	else
	{
		result = malloc(sizeof(char) * 100);
		write_nbr_base((number), base_to, result, 0);
	}
	ft_rev_str(result, ft_strlen4(result));
	if (number < 0)
		ft_rev_str(result, ft_strlen4(result));
	if (number < 0)
		ft_rev_str(&result[1], ft_strlen4(result) - 1);
	result[ft_strlen4(result) + 1] = '\0';
	return (result);
}

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

long int	convert_in_decimal(char *str, char *base)
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
