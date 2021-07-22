/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_joinR.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdubois <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/21 21:08:23 by pdubois           #+#    #+#             */
/*   Updated: 2021/07/22 11:15:28 by ascotto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "kayak.h"

char	*ft_strcat(char	*dest, char	*src)
{
	int	isrc;
	int	idest;

	isrc = 0;
	idest = 0;
	while (dest[idest])
		idest++;
	while (src[isrc])
	{
		dest[idest] = src[isrc];
		idest++;
		isrc++;
	}
	dest[idest] = '\0';
	return (dest);
}

char	*ft_strcpy(char *dest, char *src)
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

char	*ft_joinRobin(char *str1, char *str2)
{
	char	*dest;

	dest = malloc(sizeof(char) * (ft_strlen(str1) + ft_strlen(str2)) + 1);
	if (!dest)
		return (NULL);
	ft_strcpy(dest, str1);
	free(str1);
	ft_strcat(dest, str2);
	return (dest);
}
