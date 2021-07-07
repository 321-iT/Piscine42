/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ascotto- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/06 12:56:33 by ascotto-          #+#    #+#             */
/*   Updated: 2021/07/07 11:34:18 by ascotto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	condition(char *str, int i, int *neg, int my_atoi)
{		
	if ((str[i] == '\n' || str[i] == '\t' || str[i] == '\r'
			|| str[i] == '\v' || str[i] == '\f' || str[i] == ' ')
		&& (my_atoi < 1 && *neg < 1))
		return (1);
	else if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			*neg += 1;
		return (1);
	}
	return (0);
}

int	ft_atoi(char *str)
{
	int	i;
	int	neg;
	int	my_atoi;

	i = 0;
	neg = 0;
	my_atoi = 0;
	while (str[i])
	{
		if (condition(str, i, &neg, my_atoi))
			i++;
		else if (str[i] >= '0' && str[i] <= '9')
		{
			my_atoi = (my_atoi * 10) + (str[i] - 48);
			i++;
		}
		else
			break ;
	}
	if (neg % 2 == 1)
		return (-my_atoi);
	else
		return (my_atoi);
}
