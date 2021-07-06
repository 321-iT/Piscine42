/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ascotto- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/05 10:25:11 by ascotto-          #+#    #+#             */
/*   Updated: 2021/07/06 15:36:55 by ascotto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

#define JUMP printf("\n  ======================================\n")

int		ft_strcmp(char *s1,char *s2);
int		ft_strncmp(char *s1, char *s2, unsigned int n);
char	*ft_strcat(char *dest, char *src);
char	*ft_strncat(char *dest, char *src, unsigned int nb);
char	*ft_strstr(char *str, char *to_find);

int	main(void)
{
	JUMP;

	printf("\t\tEx00: \n");

	printf("Valeur retour vraie fonction : %d\n", strcmp("ABCD", "ABCDE"));
	printf("Valeur retour de ma fonction : %d\n\n", ft_strcmp("ABCD", "ABCDE"));

	printf("Valeur retour vraie fonction : %d\n", strcmp("08hjklMM", "abcd"));
	printf("Valeur retour de ma fonction : %d\n\n", ft_strcmp("08hjklMM", "abcd"));

	printf("Valeur retour vraie fonction : %d\n", strcmp("A{C", "A{6CDE"));
	printf("Valeur retour de ma fonction : %d\n\n", ft_strcmp("A{C", "A{6CDE"));

	printf("Valeur retour vraie fonction : %d\n", strcmp("\n\tookLM", "\t\nKKK"));
	printf("Valeur retour de ma fonction : %d\n\n", ft_strcmp("\n\tookLM", "\t\nKKK"));
	
	printf("Valeur retour vraie fonction : %d\n", strcmp("\n\tookLM", ""));
	printf("Valeur retour de ma fonction : %d\n\n", ft_strcmp("\n\tookLM", ""));
	
	printf("Valeur retour vraie fonction : %d\n", strcmp("", "abcd"));
	printf("Valeur retour de ma fonction : %d\n\n", ft_strcmp("", "abcd"));
	
	printf("Valeur retour vraie fonction : %d\n", strcmp("", ""));
	printf("Valeur retour de ma fonction : %d\n\n", ft_strcmp("", ""));
	
	printf("Valeur retour vraie fonction : %d\n", strcmp("abcd0", "abcd0"));
	printf("Valeur retour de ma fonction : %d\n\n", ft_strcmp("abcd0", "abcd0"));

	JUMP;

	printf("\t\tEx01: \n");

	char	huge[100000] = "aaa";
	printf("Valeur retour vraie fonction : %d\n", strncmp("ABCD", "BCD", -121));
	printf("Valeur retour de ma fonction : %d\n\n", ft_strncmp("ABCD", "BCD", -121));

	printf("Valeur retour vraie fonction : %d\n", strncmp(huge, "abcd", 100000));
	printf("Valeur retour de ma fonction : %d\n\n", ft_strncmp(huge, "abcd", 100000));

	printf("Valeur retour vraie fonction : %d\n", strncmp("ABC", "AC", 1));
	printf("Valeur retour de ma fonction : %d\n\n", ft_strncmp("ABC", "AC", 1));
	
	printf("Valeur retour vraie fonction : %d\n", strncmp("ABC", "BAC", 1));
	printf("Valeur retour de ma fonction : %d\n\n", ft_strncmp("ABC", "BAC", 1));


	printf("Valeur retour vraie fonction : %d\n", strncmp("\n\tookLM", "\t\nKKK", 15));
	printf("Valeur retour de ma fonction : %d\n\n", ft_strncmp("\n\tookLM", "\t\nKKK", 15));
	
	printf("Valeur retour vraie fonction : %d\n", strncmp("\n\tookLM", "", 465465));
	printf("Valeur retour de ma fonction : %d\n\n", ft_strncmp("\n\tookLM", "", 465465));
	
	printf("Valeur retour vraie fonction : %d\n", strncmp("", "abcd", 2));
	printf("Valeur retour de ma fonction : %d\n\n", ft_strncmp("", "abcd", 2));
	
	printf("Valeur retour vraie fonction : %d\n", strncmp("", "", -122222));
	printf("Valeur retour de ma fonction : %d\n\n", ft_strncmp("", "", -122222));
	
	printf("Valeur retour vraie fonction : %d\n", strncmp("Shorter", "ShorterTest", 7));
	printf("Valeur retour de ma fonction : %d\n\n", ft_strncmp("Shorter", "ShorterTest", 7));

	printf("\t\tEx02: \n");
	
	char	dest[25] = "abc";
	char	dest2[25] = "abc";

	printf("ft_strcat de 'abc' et 'defghijkl' : %s\n", ft_strcat(dest, "defghijkl"));
	printf("strcat de 'abc' et 'defghijkl' : %s\n", strcat(dest2, "defghijkl"));

	JUMP;

	printf("\t\tEx03: \n");

	char	dest3[1000000] = "abc";
	char	dest4[1000000] = "abc";
	
	printf("ft_strncat de 'abc' et 'defghij' et size 4 : %s\n", ft_strncat(dest3, "defghij", 1000000));
	printf("strncat de 'abc' et 'defghij' et size 4 : %s\n", strncat(dest4, "defghij", 1000000));

	JUMP;

	printf("\t\tEx04: \n");
	
	printf("Test de ft_strstr sur '', '' : %s\n", ft_strstr("abc", "abcedf"));
	printf("Test de strstr sur '', '' : %s\n", strstr("abc", "abcdef"));
}
