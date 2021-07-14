/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ascotto- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/06 12:06:59 by ascotto-          #+#    #+#             */
/*   Updated: 2021/07/14 17:32:36 by ascotto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

#define JUMP printf("\t\n======================================\n")

char	*ft_strdup(char *src);
int		*ft_range(int min, int max);
int		ft_ultimate_range(int **range, int min, int max);
char	*ft_strjoin(int size, char **strs, char *sep);
char	*ft_convert_base(char *nbr,char *base_from, char *base_to);
char	**ft_split(char *str, char *charset);



int		c_strlen(char *str)
{
	int len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

int		c_strctn(char *str1, char *str2, int at)
{
	int	len;
	int	i;

	len = c_strlen(str2);
	i = 0;
	while (i < len)
	{
		str1[at + i] = str2[i];
		i++;
	}
	str1[at + i] = 0;
	return (len + at);
}

char	*c_strautojoin(char **strs, char *sep)
{
	char	*str;
	int		len;
	int		seplen;
	int		i;
	int		j;

	len = 1;
	seplen = c_strlen(sep);
	i = 0;
	while (strs[i] != NULL)
	{
		len += c_strlen(strs[i]);
		if (strs[i + 1] != NULL)
			len += seplen;
		i++;
	}
	str = malloc(len * sizeof(char));
	i = 0;
	j = 0;
	while (strs[j])
	{
		i = c_strctn(str, strs[j++], i);
		if (strs[j])
			i = c_strctn(str, sep, i);
	}
	return (str);
}



int	main(int argc, char **argv)
{
	if (argc > 1)
	{
		JUMP;

		if (strcmp(argv[1], "0") == 0 || strcmp(argv[1], "all") == 0)
		{
			printf("\tEx00:\n");
			printf("%s\n", strcmp(strdup("Test "), ft_strdup("Test ")) == 0 ? "OK" :"Fail");
			printf("%s\n", strcmp(strdup("484df41hdy1h111fs1fsd15sf15sdf115d15fdgs15gfd4sg1615df156g1515g4erg4561esg156gr15156g15eg15eg15e51e51g1515ge156e156eg156e15156ge516e1551eg51eg15g1551eg15e516eg15e15eg1515e55eg51e15e51g5151eg15eg1515egr515151erg51er51e51e551ee5eg51egr51er51er5er5eg51e5r1e51rg5egr5eg51erg5e1r51e6rg51egr516ee5g15e1g5e1g5e1g51ger51egr51erg55reg5er55er55"), ft_strdup("484df41hdy1h111fs1fsd15sf15sdf115d15fdgs15gfd4sg1615df156g1515g4erg4561esg156gr15156g15eg15eg15e51e51g1515ge156e156eg156e15156ge516e1551eg51eg15g1551eg15e516eg15e15eg1515e55eg51e15e51g5151eg15eg1515egr515151erg51er51e51e551ee5eg51egr51er51er5er5eg51e5r1e51rg5egr5eg51erg5e1r51e6rg51egr516ee5g15e1g5e1g5e1g51ger51egr51erg55reg5er55er55")) == 0 ? "OK" : "Fail");
			printf("Retour ft_strdup : %s\n", ft_strdup("Coucou\t 00 "));
			printf("Retour strdup : %s\n", strdup("Coucou\t 00 "));
			printf("Retour ft_strdup : %s\n", ft_strdup(""));
			printf("Retour strdup : %s\n", strdup(""));
			printf("Retour ft_strdup : %s\n", ft_strdup(" "));
			printf("Retour strdup : %s\n", strdup(" "));
		}




		if (strcmp(argv[1], "1") == 0 || strcmp(argv[1], "all") == 0)
		{
			JUMP;
			printf("\tEx01:\n");

			int *range;

			range = ft_range(0, 5);
			printf("0, 1, 2, 3, 4 : %d, %d, %d, %d, %d\n", range[0], range[1], range[2], range[3], range[4]);

			range = ft_range(3, 3);

			range = ft_range(-1, 1);
			printf("-1, 0 : %d, %d, %d", range[0], range[1], range[200]);
		}

		if (strcmp(argv[1], "2") == 0 || strcmp(argv[1], "all") == 0)
		{
			JUMP;
			printf("\tEx02:\n");

			int *range1;

			printf("5:%d\n", ft_ultimate_range(&range1, 0, 5));
			printf("0, 1, 2, 3, 4 : %d, %d, %d, %d, %d\n", range1[0], range1[1], range1[2], range1[3], range1[4]);

			printf("0:%d\n", ft_ultimate_range(&range1, 3, 3));

			printf("2:%d\n", ft_ultimate_range(&range1, -1, 1));
			printf("-1, 0 : %d, %d", range1[0], range1[1]);
		}

		if (strcmp(argv[1], "3") == 0 || strcmp(argv[1], "all") == 0)
		{
			JUMP;
			printf("\tEx03:\n");

			char	*str3[5] = {"Je", "suis", "joined", "sans", "la fin"};
			printf("%s\n",  ft_strjoin(5, str3, "___"));
		}
		if (strcmp(argv[1], "4") == 0 || strcmp(argv[1], "all") == 0)
		{
			JUMP;
			printf("\tEx04:\n");

			printf("-42:%s\n", ft_convert_base("-2a", "0123456789abcdef", "0123456789"));
			printf("2a:%s\n", ft_convert_base("0000000000000000000000042", "0123456789", "0123456789abcdef"));
			printf("42:%s\n", ft_convert_base("--2a", "0123456789abcdef", "0123456789"));
			printf("-2a:%s\n", ft_convert_base("-42", "0123456789", "0123456789abcdef"));
		}
		if (strcmp(argv[1], "5") == 0 || strcmp(argv[1], "all") == 0)
		{
			JUMP;
			printf("\tEx05:\n");


			char **tab;

			tab = ft_split("Ceci&est$un##############################################################################################################################################################succes@!", "&$#@");
			printf("%s\n", c_strautojoin(tab, " "));
			tab = ft_split("Success", "CUT");
			printf("%s\n", c_strautojoin(tab, " "));
			tab = ft_split("Success", "");
			printf("%s\n", c_strautojoin(tab, " "));
			tab = ft_split("", "");
			printf("OK\n");
			tab = ft_split("", "CUT");
			printf("OK\n");
			tab = ft_split("       ", "       ");
			printf("OK\n");
			tab = ft_split("         ", "       ");
			printf("OK\n");		}
	}
}
