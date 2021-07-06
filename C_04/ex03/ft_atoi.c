/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ascotto- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/06 12:56:33 by ascotto-          #+#    #+#             */
/*   Updated: 2021/07/06 18:38:40 by ascotto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	condition(char *str, int i, int *neg, int atoi)
{		
	if ((str[i] == '\n' || str[i] == '\t' || str[i] == '\r'
			|| str[i] == '\v' || str[i] == '\f' || str[i] == ' ')
		&& (atoi < 1 && *neg < 1))
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
	int	atoi;

	i = 0;
	neg = 0;
	atoi = 0;
	while (str[i])
	{
		if (condition(str, i, &neg, atoi))
			i++;
		else if (str[i] >= '0' && str[i] <= '9')
		{
			atoi = (atoi * 10) + (str[i] - 48);
			i++;
		}
		else
			break ;
	}
	if (neg % 2 == 1)
		return (-atoi);
	else
		return (atoi);
}
