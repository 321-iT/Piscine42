/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ascotto- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/06 12:56:33 by ascotto-          #+#    #+#             */
/*   Updated: 2021/07/07 20:39:31 by ascotto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	i;
	int	neg;
	int	res;
	int	toggle;

	i = 0;
	neg = 1;
	res = 0;
	toggle = 1;
	while (str[i])
	{
		if (((str[i] >= 9 && str[i] <= 13) || str[i] == 32) && toggle)
			i++;
		else if (str[i] == '-' || str[i] == '+')
		{
			if (str[i++] == '-')
				neg *= -1;
			toggle = 0;
		}
		else if (str[i] >= '0' && str[i] <= '9')
			res = (res * 10) + (str[i++] - 48);
		else
			break ;
	}
	return (res * neg);
}
