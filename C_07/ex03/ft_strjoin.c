/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ascotto- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/12 11:47:26 by ascotto-          #+#    #+#             */
/*   Updated: 2021/07/19 14:33:57 by ascotto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen3(char *str)
{
	int	i;

	i = 0;
	if (str == NULL)
		return (0);
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
	if (str == NULL)
		return (0);
	while (i < size)
	{
		if (!str[i] || !sep)
			return (0);
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

	i = 0;
	if (size <= 0)
		return (result = malloc(sizeof(char)));
	tot_len = total_len(size, strs, sep);
	tot_len -= ft_strlen3(sep);
	result = malloc(sizeof(char) * (tot_len + 1));
	result[0] = '\0';
	if (!result)
		return (NULL);
	while (i < size - 1)
	{
		ft_strcat3(result, strs[i]);
		ft_strcat3(result, sep);
		i++;
	}
	ft_strcat3(result, strs[i]);
	result[tot_len] = '\0';
	return (result);
}
