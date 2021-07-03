/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ascotto- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/30 16:22:37 by ascotto-          #+#    #+#             */
/*   Updated: 2021/06/30 16:49:05 by ascotto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
void	ft_is_negative(int n)
{
	char	positif;
	char	negatif;

	positif = 'P';
	negatif = 'N';
	if (n >= 0)
	{
		write (1, &positif, 1);
	}
	else
	{
		write (1, &negatif, 1);
	}
}
