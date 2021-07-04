/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ascotto- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/03 12:19:42 by ascotto-          #+#    #+#             */
/*   Updated: 2021/07/04 22:09:42 by ascotto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char n); /*Prototype de ft_putchar*/

char	condition(int j, int i, int x, int y)
/*Cette fonction effectue les tests qui permettent de savoir
a quel endroit du carre on se trouve, et qui renvoie le caractere
correspondant*/
{
	if ((j == 1 && i == 1) || (j == x && i == y))
	{
		if ((y == 1 && j > 1) || (x == 1 && i == y))
			return ('\\');
		return ('/');
	}
	else if ((j == x && i == 1) || (j == 1 && i == y))
	{	
		return ('\\');
	}
	else if (j == 1 || j == x || i == 1 || i == y)
		return ('*');
	else
		return (' ');
}

/*Ici on va effectuer une boucle sur l'axe Y, qui a chaque tour appellera X 
fois la fonction qui determine quel caractere afficher, en entrant dans une
deuxieme boucle sur la valeur X*/
void	rush(int x, int y)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (x <= 0 || y <= 0)
		return ;
	else if (x == 1 && y == 1)
	{
		ft_putchar('/');
		return ;
	}
	while (++i <= y)
	{
		if (i > 1)
			ft_putchar('\n');
		j = 0;
		while (++j <= x)
		{
			ft_putchar(condition(j, i, x, y));
		}
	}
	ft_putchar('\n');
}
