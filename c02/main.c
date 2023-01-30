/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llevasse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/07 00:40:18 by llevasse          #+#    #+#             */
/*   Updated: 2022/08/09 12:31:31 by llevasse         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

/* char	*ft_strcpy(char *dest, char *src);
char	*ft_strncpy(char *dest, char *src, unsigned int n); 
int	ft_str_is_alpha(char *str);
int	ft_str_is_numeric(char *str);
int ft_str_is_lowercase(char *str);
int ft_str_is_uppercase(char *str);
int ft_str_is_printable(char *str);
char	*ft_strupcase(char *str); 
char	*ft_strlowcase(char *str); */
char *ft_strcapitalize(char *str); 
/* unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size); */


int main(void){
	char src[] = "salut, Q comment d tu vas ? 42mots quarante-deux; cinquante+et+un";
	ft_strcapitalize(src);
	printf("%s\n", src);
}
