/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_trim.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ascotto- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/18 10:24:43 by ascotto-          #+#    #+#             */
/*   Updated: 2021/07/18 19:58:36 by ascotto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

#include "kayak.h" 

char	*ft_trim_key(char *str)
{
	int		i;
	int		j;
	char	*res;
	int		len;

	i = -1;
	len = 0;
	if (((str[0] < '0' || str[0] > '9') && str[0] != '+')
		|| (str[0] == '+' && str[1] == '+'))
		return ("DICTERROR");
	if (str[0] == '+')
		i++;
	while ((str[++i] >= '0' && str[i] <= '9' && str[i]) && str[i] != '+')
		len++;
	res = malloc((len + 1) * sizeof(char));
	if (!res)
		return (NULL);
	res[len] = '\0';
	j = -1;
	i = -1;
	if (str[0] == '+')
		i++;
	while (j < len - 1)
		res[++j] = str[++i];
	return (res);
}

char	*ft_trim_value(char *str)
{
	int		i;
	int		len;
	int		j;
	char	*res;

	i = 0;
	len = -1;
	while (str[i] != ':' && str[i])
		i++;
	if (str[i++] != ':')
		return ("DICTERROR");
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	while (str[i + ++len])
		if (str[i + len] < 32 || str[i + len] > 126)
			return ("DICTERROR");
	res = malloc(sizeof(char) * (len + 1));
	if (!res)
		return (NULL);
	res[len] = '\0';
	j = 0;
	while (j < len + 1)
		res[j++] = str[i++];
	return (res);
}
