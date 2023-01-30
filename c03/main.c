/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llevasse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 14:20:24 by llevasse          #+#    #+#             */
/*   Updated: 2022/08/10 17:17:19 by llevasse         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>

int	ft_strcmp(char *s1, char *s2);
int	ft_strncmp(char *s1, char *s2, unsigned int n);
int	*ft_strcat(char *dest, char *src);
int	*ft_strncat(char *dest, char *src, unsigned int nb);
char	*ft_strstr(char *str, char *to_find);
unsigned int ft_strlcat(char *dest, char *src, unsigned int size);

int	main(void)
{
	int result;
	int resultA;
	char dest[20] = "test ";
	char src[] = "ex02";
	char dest2[20] = "test ";
	char src2[] = "abcdef";
	char str[] = "je recherche une string";
	char to_find[] = "une";
	char *result_find;
	int lenght;
	int lenghtA;
	char dest3[20] = "test ";
	char dest3A[20] = "test ";
	char src3[] = "ex05";
	char src3A[] = "ex05";	

	/*			test ex01			*/

	printf("Test ex01\n");
	printf("str egale\n");
	result = ft_strncmp("abc","abc",3);
	resultA = strncmp("abc","abc", 3);
	printf("result : %d\n", result);
	printf("result attendu : %d\n", resultA);

	printf("\nstr egale\n");
	result = ft_strncmp("abcd","abca",3);
	resultA = strncmp("abcd","abca", 3);
	printf("result attendu : %d\n", resultA);
	printf("result : %d\n", result);
	
	printf("\nstr diff \n");
	result = ft_strncmp("abcaas","abcas",4);
	printf("result : %d\n", result);
	resultA = strncmp("abcaas","abcas", 4);
	printf("result attendu : %d\n", resultA);
	
	printf("\nstr different\n");
	result = ft_strncmp("abcd","abc",4);
	resultA = strncmp("abcd","abc", 4);
	printf("result attendu : %d\n", resultA);
	printf("result : %d\n", result);
	
	printf("\nstr different attendu -97\n");
	result = ft_strncmp("abc","abca",4);
	resultA = strncmp("abc","abca", 4);
	printf("result : %d\n", result);
	printf("result attendu : %d\n", resultA);

	printf("fin test ex01\n\n");
	/*			test ex02			*/

	printf("Test ex02\n");
	printf("concatenation de test et ex02\n");
	ft_strcat(dest, src);
	printf("%s\n", dest);
	printf("fin test ex02\n\n");
	/*			test ex03			*/

	printf("Test ex03\n");
	printf("concatenation de test et abcd..\n");
	ft_strncat(dest2, src2, 4);
	printf("%s\n", dest2);
	printf("fin test ex03\n\n");
	/*			test ex04			*/

	printf("Test ex04\n");
	result_find = ft_strstr(str,to_find);
	printf("%s\n", result_find);
	printf("fin test ex04\n\n");
	/*			test ex05			*/

	printf("Test ex05\n");
	lenght = ft_strlcat(dest3,src3,2);
	lenghtA = strlcat(dest3A, src3A, 2);
	printf("len %d\n", lenght);
	printf("len attendu : %d\n", lenghtA);
	printf("%s\n", dest3);
	printf("%s\n", dest3A);


}

