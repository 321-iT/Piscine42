/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ascotto- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/02 10:26:20 by ascotto-          #+#    #+#             */
/*   Updated: 2021/07/05 22:54:53 by ascotto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

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
char	*ft_strcapitalize(char *str);
unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);
void	ft_putstr_non_printable(char *str);

void    ft_putstr(char *str)
{
    int l;

    l = 0;
    while (str[l])
    {
        l++;
    }
    write(1, str, l);
}

int main(void)
{
	JUMP;

    printf("\t\tEx00 :\n");
    char dest[] = "Epic fail";
    char src[] = "Success";
    printf("Must all be same (3 lines):\n%s\n%s\n%s\n", src, ft_strcpy(dest, src), dest);
    char dest1[] = "";
    char src1[] = "";
    ft_strcpy(dest1, src1);

	//********
	JUMP;
	//********
    
    printf("\t\tEx01 :\n");
	
	int i;
    char dest2[] = "Epic fail !!!!!";
    char src2[] = "Success";
    printf("%s\n%s\n%s\n", src, ft_strncpy(dest2, src2, 15), dest2);
    i = 9;
    while (i < 15)
    {
        if (dest2[i] != '\0')
        {
            printf("FAIL! Remainder of dst must be filled with `\\0' characters, got %c (\\%x) at pos %d\n", dest2[i], dest2[i], i);
            break;
        }
        i++;
    }
	//********
	JUMP;
	//***********

    printf("\t\tEx02 :\n");
    
	printf("%s\n%s\n%s\n%s\n%s\n%s\n",
    ft_str_is_alpha("")?"OK":"Fail",
    ft_str_is_alpha("ABCDEFGHIJKLMNOPQRSTUVWXZabcdefghijklmnopqrstuvwxyz")?"OK":"Fail",
    !ft_str_is_alpha("1")?"OK":"Fail",
    !ft_str_is_alpha(" ")?"OK":"Fail",
    !ft_str_is_alpha("\\")?"OK":"Fail",
    !ft_str_is_alpha("\n")?"OK":"Fail");
	//******
	JUMP;
	//*****
	
    printf("\t\tEx03 :\n");
    
	printf("%s\n%s\n%s\n%s\n%s\n%s\n",
    ft_str_is_numeric("")?"OK":"Fail",
    !ft_str_is_numeric("ABCDEFGHIJKLMNOPQRSTUVWXZabcdefghijklmnopqrstuvwxyz")?"OK":"Fail",
    ft_str_is_numeric("0123456789")?"OK":"Fail",
    !ft_str_is_numeric(" ")?"OK":"Fail",
    !ft_str_is_numeric("\\")?"OK":"Fail",
    !ft_str_is_numeric("\n")?"OK":"Fail");
	//******
	JUMP;
	//*****
    
    printf("\t\tEx04 :\n");
	
	printf("%s\n%s\n%s\n%s\n%s\n%s\n%s\n",
    ft_str_is_lowercase("")?"OK":"Fail",
    ft_str_is_lowercase("abcdefghijklmnopqrstuvwxyz")?"OK":"Fail",
    !ft_str_is_lowercase("ABCDEFGHIJKLMNOPQRSTUVWXZabcdefghijklmnopqrstuvwxyz")?"OK":"Fail",
    !ft_str_is_lowercase("0123456789")?"OK":"Fail",
    !ft_str_is_lowercase(" ")?"OK":"Fail",
    !ft_str_is_lowercase("\\")?"OK":"Fail",
    !ft_str_is_lowercase("\n")?"OK":"Fail");
	//******
	JUMP;
	//*****
	
    printf("\t\tEx05 :\n");
    
	printf("%s\n%s\n%s\n%s\n%s\n%s\n%s\n",
    ft_str_is_uppercase("")?"OK":"Fail",
    ft_str_is_uppercase("ABCDEFGHIJKLMNOPQRSTUVWXZ")?"OK":"Fail",
    !ft_str_is_uppercase("ABCDEFGHIJKLMNOPQRSTUVWXZabcdefghijklmnopqrstuvwxyz")?"OK":"Fail",
    !ft_str_is_uppercase("0123456789")?"OK":"Fail",
    !ft_str_is_uppercase(" ")?"OK":"Fail",
    !ft_str_is_uppercase("\\")?"OK":"Fail",
    !ft_str_is_uppercase("\n")?"OK":"Fail");
	//******
	JUMP;
	//*****
    
    printf("\t\tEx06 :\n");
	
	char    c;

    c = 1;
    while (c != 0)
    {
        if ((c < ' ' || c > '~'))
        {
			if (ft_str_is_printable(&c))
            	printf("Fail for char in decimal: %d\n", (int)c);
        }
        c++;
    }

    printf("Success\n");
	//******
	JUMP;
	//**********

    printf("\t\tEx07 :\n");
    
	char c2[] = "AbCdEfG-Yz";
    ft_putstr("ABCDEFG-YZ:");
    ft_putstr(ft_strupcase(c2));
    ft_putstr(":");
    ft_putstr(c2);
	//******
	JUMP;
	//**********
    
    printf("\t\tEx08 :\n");
	
	char c3[] = "AbCdEfG-Yz";
    ft_putstr("abcdefg-yz:");
    ft_putstr(ft_strlowcase(c3));
    ft_putstr(":");
    ft_putstr(c3);
	//******
	JUMP;
	//**********
    
    printf("\t\tEx09 :\n");
	
    char c4[] = "444salut,coMMent tu vAs ?--- -[^/gytmk#le keGHugkk%3ql3d$ ----  42mOts quArAnTe-dEux; cinQuante+et+uni\n";
    ft_putstr(ft_strcapitalize(c4));
	//**********
	JUMP;
	//*********
    
    printf("\t\tEx10 :\n");
    
	char 	destX[] = "blabla";
	char	destY[] = "blabla";

    printf("Valeur de ft_strlcpy : %d\n", ft_strlcpy(destX, "bla",6));
    printf("Valeur de strlcpy : %lu\n", strlcpy(destY, "bla", 6));
   
	printf("chaine apres ft_strlcpy : %s\n", destX);
	printf("chaine apres strlcpy : %s\n", destY);
	JUMP;
	//*********
    
    printf("\t\tEx11 :\n");
    
	char c5[] = "Coucou\nåtu cć  vas bien ?";
    ft_putstr("Coucou\\0atu vas bien ?:");
    ft_putstr_non_printable(c5);
    char d[] = "\x81\xbe";
    ft_putstr("\n\\81\\be:");
    ft_putstr_non_printable(d);
	//**********
	JUMP;
	//********
	JUMP;
	//********
}
