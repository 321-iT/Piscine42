/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ascotto- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/05 17:52:42 by ascotto-          #+#    #+#             */
/*   Updated: 2021/07/06 11:28:13 by ascotto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen3(char	*str)
{
	int	i;

	i = 0;
	while (*str)
	{
		str++;
		i++;
	}
	return (i);
}

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (!*to_find)
		return (str);
	while (str[i] != '\0')
	{
		if (str[i] == to_find[0])
		{
			j = 0;
			while (str[i] == to_find[j])
			{
				if (j == ft_strlen3(to_find) - 1)
					return (str + (i - j));
				i++;
				j++;
			}
		}
		else
			i++;
	}
	return (0);
}
