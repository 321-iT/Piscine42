/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ascotto- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/02 10:26:20 by ascotto-          #+#    #+#             */
/*   Updated: 2021/07/04 09:38:59 by ascotto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define JUMP printf("\n================================\n")

char	*ft_strcpy(char *dest,char *src);
char	*ft_strncpy(char *dest,char *src,unsigned int n);
int		ft_str_is_alpha(char *str);
int		ft_str_is_numeric(char *str);
int		ft_str_is_lowercase(char *str);
int		ft_str_is_uppercase(char *str);
int		ft_str_is_printable(char *str);
char	*ft_strupcase(char *str);
char	*ft_strlowcase(char *str);
//char	*ft_strcapitalize(char *str);

int main(void)
{
	JUMP;

	char	strcpy_chaine[] = "123456";
	
	printf("Chaine destination  : %s\n", strcpy_chaine);


	printf("On copie 'abc' dans Chaine_strcpy = %s\n", ft_strcpy(strcpy_chaine, "abc"));

	printf("On copie 'abcdefgh' dans Chaine_strcpy = %s\n", ft_strcpy(strcpy_chaine, "abcdefgh"));

	//********
	JUMP;
	//********
	
	char	str_n_cpy_chaine[] = "012345";

	printf("Chaine destination  : %s\n", str_n_cpy_chaine);


	printf("On copie 'abc' dans Chaine_str_n_cpy = %s\n", ft_strncpy(str_n_cpy_chaine, "abc", 18));

	//********
	JUMP;
	//***********
	
	char	is_alpha[]	= "alkLKAKA4567__";
	char	is_alpha_2[]	= "abcedghijklmnopqstuvwxyzQWERTYUIOPASDFGHJKLZXCVBNNMAbcdnEFG";
	char	is_empty_alpha[] = "";

	printf("retour fonction non alpha : %d\n", ft_str_is_alpha(is_alpha));
	printf("retour fonction que alpha : %d\n", ft_str_is_alpha(is_alpha_2));
	printf("retour fonction empty : %d\n", ft_str_is_alpha(is_empty_alpha));
	//******
	JUMP;
	//*****
	
	char	is_num[]	= "\na!!bcced1322224esds";
	char	is_num_2[]	= "101234567891012";
	char	is_empty_num[] = "";

	printf("retour fonction non num : %d\n", ft_str_is_numeric(is_num));
	printf("retour fonction que num : %d\n", ft_str_is_numeric(is_num_2));
	printf("retour fonction empty : %d\n", ft_str_is_numeric(is_empty_num));
	//******
	JUMP;
	//*****
	
	char	is_lower_case[]	= "\na!!bcced1322224esds";
	char	is_lower_case2[]	= "qwertyuiopasdfghklzxcvbnm";
	char	is_empty_lower_case[] = "";

	printf("retour fonction non lower case : %d\n", ft_str_is_lowercase(is_lower_case));
	printf("retour fonction que lower case : %d\n", ft_str_is_lowercase(is_lower_case2));
	printf("retour fonction empty : %d\n", ft_str_is_lowercase(is_empty_lower_case));
	//******
	JUMP;
	//*****
	
	char	is_upper_case[]	= "0\n\tHJHJHJHskjdh7824esds";
	char	is_upper_case2[]	= "QWERTYUIOPASDFGHJKLZXCVBNMZXCVBNMLKJHGFDSAQWERTYUIOP";
	char	is_empty_upper_case[] = "";

	printf("retour fonction non upper case : %d\n", ft_str_is_uppercase(is_upper_case));
	printf("retour fonction que upper case : %d\n", ft_str_is_uppercase(is_upper_case2));
	printf("retour fonction empty : %d\n", ft_str_is_uppercase(is_empty_upper_case));
	//******
	JUMP;
	//*****
	
	char	is_printable[]	= "0\n\tHJHJHJHskjdh7824esds";
	char	is_printable2[]	= "!\"%&'()*+#$@[\\]^`{|}~,-./:;<=>?_abcABC132987";
	char	is_empty_printable[] = "";

	printf("retour fonction non printable : %d\n", ft_str_is_printable(is_printable));
	printf("retour fonction que printable : %d\n", ft_str_is_printable(is_printable2));
	printf("retour fonction empty : %d\n", ft_str_is_printable(is_empty_printable));
	//******
	JUMP;
	//**********
	
	char	lower_case[]	= "xxxx0\tHJsdasQWJKJLA7824esds";
	char	is_empty_strup[] = "";

	printf("Chaine en lower case: %s\n", lower_case);

	printf("Chaine apres la fonction strup: %s\n", ft_strupcase(lower_case));

	printf("Retour apres un appel de strupcase sur une chaine vide: %s\n", ft_strupcase(is_empty_strup));
	//******
	JUMP;
	//**********
	
	char	upper_case[]	= "xKJAHSJKAGCZJHGKLZJ<>=/=LAxxx0\tHJsdasQWJKJLA7824esds";
	char	is_empty_strlow[] = "";

	printf("Chaine en upper case: %s\n", upper_case);

	printf("Chaine apres la fonction strlow: %s\n", ft_strlowcase(upper_case));

	printf("Retour apres un appel de strlowcase sur une chaine vide: %s\n", ft_strlowcase(is_empty_strlow));
	//******
	JUMP;
	//**********
	char	to_capitalize[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
		
	printf("Chaine avant fonction capitalize : %s", to_capitalize);
	
	printf("Chaine apres fonction capitalize : %s", ft_strcapitalize(to_capitalize));
	//**********
	JUMP;
	//*********
	
}
