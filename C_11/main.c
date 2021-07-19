/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ascotto- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/19 11:26:58 by ascotto-          #+#    #+#             */
/*   Updated: 2021/07/19 18:30:08 by ascotto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

# define JUMP printf("\n ================== \n")

void	ft_foreach(int *tab,int length, void(*f)(int));
int		*ft_map(int *tab, int length, int(*f)(int));
int		ft_any(char **tab, int(*f)(char*));
int		ft_count_if(char **tab, int length, int(*f)(char*));
int		ft_is_sort(int *tab,int length, int(*f)(int, int));
void	ft_sort_string_tab(char **tab);
void	ft_advanced_sort_string_tab(char **tab, int(*cmp)(char *, char *));

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	unsigned int	i;

	if (nb < 0)
	{
		ft_putchar('-');
		i = -nb;
	}
	else
		i = nb;
	if (i > 9)
	{
		ft_putnbr(i / 10);
		i = i % 10;
	}
	ft_putchar(i + '0');
}

int	ft_double(int n)
{
	return (n * 2);
}

int	got_Z(char *tab)
{
	int	i;
	i = 0;
	while (tab[i])
	{
		if (tab[i] == 'Z')
			return (1);
		i++;
	}
	return (0);
}

int	ft_compare(int a, int b)
{
	if (a > b)
		return (1);
	if (a < b)
		return (-1);
	else
		return (0);
}

int	main(int ac, char **av)
{
	
	JUMP;
	///////////
	printf("\t Ex00: \n\n");
	
	int	tab_foreach[35] = {0};
	
	ft_foreach(tab_foreach, 35, &ft_putnbr);
	
	/////////
	JUMP;
	//////////
	printf("\t Ex01: \n\n");

	int	tab_map[5] = {0, 1, 2, 3, 4};
	int	*tab_2;
	tab_2 = ft_map(tab_map, 5, &ft_double);
	ft_foreach(tab_2, 5, &ft_putnbr);
	
	/////////
	JUMP;
	//////////
	printf("\t Ex02: \n\n");
	(void)ac;
	printf("Retour ft_any :%d\n", ft_any(av, &got_Z));
	/* La fonction got_z cherche une occurence de z dans une chaine de
	 * caracteres et renvoie 1 si jamais elle en trouve, 0 sinon*/
	/////////
	JUMP;
	//////////
	printf("\t Ex03: \n\n");

	printf("Retour ft_count_if :%d\n", ft_count_if(av, ac, &got_Z));
	
	/////////
	JUMP;
	//////////
	printf("\t Ex04: \n\n");
	int	tab_is_sort[5] = { 10 , 9, 0 , 0, 0};
	
	printf("Retour ft_is_sort :%d\n", ft_is_sort(tab_is_sort, 5, &ft_compare));
	
	/////////
	JUMP;
	//////////
	printf("\t Ex05: \n\n");
	printf("\t\t\t\t REMETTRE LE EX05 DANS LE DOSSIER\n");
	
	/////////
	JUMP;
	//////////
	printf("\t Ex06: \n\n");
	char *tab_to_sort[5] = {"je", "trie\n", "suis", "Bonjour", NULL};

	for(int i = 0; i < 5; i++)
		printf("Tab[%d] = %s\n", i, tab_to_sort[i]);
	
	printf("Apres appel de la fonction :\n");
	ft_sort_string_tab(tab_to_sort);

	for(int i = 0; i < 5; i++)
		printf("Tab[%d] = %s\n", i, tab_to_sort[i]);
	
	/////////
	JUMP;
	//////////
	printf("\t Ex07: \n\n");
	char *tab_to_advanced_sort[5] = {"je", "trie\n", "suis", "Bonjour", NULL};

	for(int i = 0; i < 5; i++)
		printf("Tab[%d] = %s\n", i, tab_to_advanced_sort[i]);
	
	printf("Apres appel de la fonction avec strcmp (doit etre identique au resultat precedent) :\n");
	ft_sort_string_tab(tab_to_advanced_sort);

	for(int i = 0; i < 5; i++)
		printf("Tab[%d] = %s\n", i, tab_to_advanced_sort[i]);
	///////
	JUMP;
	printf("================FIN DU TEST=================\n");
}
