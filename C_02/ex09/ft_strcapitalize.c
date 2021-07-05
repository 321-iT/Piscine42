/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ascotto- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/03 19:55:52 by ascotto-          #+#    #+#             */
/*   Updated: 2021/07/04 22:20:01 by ascotto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	is_alphanumeric(char n)
{
	if ((n > 64 && n < 91) || (n > 96 && n < 123) || (n > 47 && n < 58))
		return (1);
	else
		return (0);
}

char	*ft_strlowcase2(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		if (str[i] < 65 || str[i] > 90)
		{
			i++;
		}
		else
		{
			str[i] += 32;
			i++;
		}
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	ft_strlowcase2(str);
	if (str[i] > 96 || str[i] < 123)
	{
		str[i] -= 32;
		i++;
	}
	while (str[i] != '\0')
	{
		if ((str[i] > 96 && str[i] < 123) && (is_alphanumeric(str[i - 1]) == 0))
		{
			str[i] -= 32;
			i++;
		}
		else
			i++;
	}
	return (str);
}
