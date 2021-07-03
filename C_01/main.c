/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ascotto- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/01 14:50:56 by ascotto-          #+#    #+#             */
/*   Updated: 2021/07/02 12:09:18 by ascotto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

#define JUMP printf("\n================================================\n")

void	ft_ft(int *nbr);
void	ft_ultimate_ft(int *********nbr);
void	ft_swap	(int *a, int *b);
void	ft_div_mod(int a, int b, int *div, int *mod);
void	ft_ultimate_div_mod(int *a, int *b);
void	ft_putstr(char *str);
int		ft_strlen(char *str);
void	ft_rev_int_tab(int *tab, int size);
void	ft_sort_int_tab(int *tab, int size);

int main(void)
{
	int	num_test;

	num_test = 12;
	printf("num = %d\n",num_test);

	ft_ft(&num_test);
	printf("num = %d",num_test);
	//*********
	JUMP;
	//***********
	int swap1,swap2;
	
	swap1 = 21;
	swap2 = 42;
	printf(" swap1 = %d et swap2 = %d\n",swap1,swap2);
	ft_swap(&swap1, &swap2);
	printf(" swap1 = %d et swap2 = %d",swap1,swap2);
	//*********
	JUMP;
	//*********
	
	int divA,divB;
	int division;
	int modulo;

	divA = 17;
	divB = 2;
	division = 0;
	modulo = 0;

	printf("\nDivA = %d , divB = %d, division = %d, modulo = %d", divA, divB, division, modulo);
	ft_div_mod(divA, divB, &division, &modulo);
	printf("\nDivA = %d , divB = %d, division = %d, modulo = %d", divA, divB, division, modulo);
	//************
	JUMP;
	//*********
	
	int	ultimate_div_a;
	int	ultimate_div_b;

	ultimate_div_a = 17;
	ultimate_div_b = 2;
	printf("a = %d , b = %d \n", ultimate_div_a,ultimate_div_b);
	ft_ultimate_div_mod(&ultimate_div_a, &ultimate_div_b);
	printf("a = %d , b = %d \n", ultimate_div_a,ultimate_div_b);
	//**************
	JUMP;
	//***********
	
	char chaine[] = "Je suis fatigue";
	
	ft_putstr(chaine);
	//***********
	JUMP;
	//***********
	
	char chaine_str_len[] = "0123456789";
	
	printf("nombre de caracteres de (%s) : %d",chaine_str_len,ft_strlen(chaine_str_len));


	//********
	JUMP;
	//********
	
	int tableau_a_swapper[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	
	for (int i = 0 ; i < 10; i++)
		printf("Tableau[%d] = %d ",i, tableau_a_swapper[i]);

	ft_rev_int_tab(tableau_a_swapper, 10);
	printf("\n");
	for (int i = 0 ; i < 10; i++)
		printf("Tableau[%d] = %d ",i, tableau_a_swapper[i]);
	//********
	JUMP;
	//********
	
	int tableau_a_trier[10] = {7, 4, -74, 1789787, 0, 1, 0, 1, 3, -2147483647};

	for (int i = 0 ; i < 10; i++)
		printf(" %d ", tableau_a_trier[i]);
	
	printf("\n");
	ft_sort_int_tab(tableau_a_trier, 10);

	for (int i = 0 ; i < 10; i++)
		printf(" %d ", tableau_a_trier[i]);
}
