/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ascotto- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/05 12:52:57 by ascotto-          #+#    #+#             */
/*   Updated: 2021/07/06 14:17:27 by ascotto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
		return (0);
	else if (n == 1)
		return (s1[0] - s2[0]);
	if (s1[i] == '\0' && s2[i] == '\0')
		return (0);
	while (i < (n - 1) && s1[i] && s2[i])
	{
		if (s1[i] == s2[i])
			i++;
		else
			break ;
	}
	if ((s1[i] - s2[i]) < 0)
		return (-1);
	else if ((s1[i] - s2[i]) > 0)
		return (1);
	else
		return (0);
}
