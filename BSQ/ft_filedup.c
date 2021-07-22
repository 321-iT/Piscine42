/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_read_in_str.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ascotto- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/20 17:57:44 by ascotto-          #+#    #+#             */
/*   Updated: 2021/07/22 11:16:07 by ascotto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "kayak.h"

char	*ft_filedup(int fd)
{
	char	buf[BUF_SIZE];
	char	*str;
	int		ret;

	ret = 1;
	str = malloc(sizeof(char));
	if (!str)
		return (NULL);
	str[0] = '\0';
	while (ret > 0)
	{
		ret = read(fd, buf, BUF_SIZE - 1);
		buf[ret] = '\0';
		str = ft_joinRobin(str, buf);
		if (!str)
			return (NULL);
		if (str[0] == '0')
			return (NULL);
	}
	return (str);
}
