/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_read_in_str.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchassig <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/18 22:27:21 by mchassig          #+#    #+#             */
/*   Updated: 2021/07/18 22:36:48 by mchassig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "kayak.h"

char	*ft_read_in_str(int letter_count, char *file_name)
{
	int		fd;
	int		i;
	char	*str;
	int		ret;
	char	c;

	str = malloc((letter_count + 1) * sizeof(char));
	if (!str)
		return (NULL);
	str[letter_count] = '\0';
	fd = open(file_name, O_RDONLY);
	ret = read(fd, &c, 1);
	str[0] = c;
	i = 1;
	while (ret != 0)
	{
		ret = read(fd, &c, 1);
		if (ret != 0)
		{
			str[i] = c;
			i++;
		}
	}
	close(fd);
	return (str);
}
