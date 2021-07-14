/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ascotto- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/12 11:47:26 by ascotto-          #+#    #+#             */
/*   Updated: 2021/07/12 14:36:41 by ascotto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen3(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strcat3(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

int	total_len(int size, char **str, char *sep)
{
	int	i;
	int	total;

	i = 0;
	total = 0;
	while (i < size)
	{
		total += ft_strlen3(str[i]);
		total += ft_strlen3(sep);
		i++;
	}
	return (total);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		tot_len;
	char	*result;

	i = -1;
	if (size < 0)
		return (NULL);
	if (size == 0)
	{
		result = malloc(sizeof(char) * 1);
		result[0] = '\0';
		return (result);
	}
	tot_len = total_len(size, strs, sep);
	result = malloc(sizeof(*result) * (tot_len + 1));
	if (!result)
		return (NULL);
	while (++i < size - 1)
	{
		ft_strcat3(result, strs[i]);
		ft_strcat3(result, sep);
	}
	ft_strcat3(result, strs[i]);
	result[tot_len + 1] = '\0';
	return (result);
}
