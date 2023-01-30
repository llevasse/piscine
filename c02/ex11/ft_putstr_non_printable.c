/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llevasse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 09:02:30 by llevasse          #+#    #+#             */
/*   Updated: 2022/08/08 10:09:01 by llevasse         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	print_char(char *str)
{
	int i;

	i = 0;
	while(str[i] != '\0')
		write(1, str[i], 1);
}

void	ft_putstr_non_printable(char *str)
{
	char hex[0];
    char data[] = "0123456789ABCDEF";
	int i;
    
	buf[0:] = '0';
    buf[1] = 'x';
    i = 0;
    while (str[i] != '\0') 
	{
        buf[i ++] = data[a % 16];
        a /= 16;
    }    
    int j = 2;
    -- i;
    // reverse i..j
    while (j < i) {
        char t = buf[j];
        buf[j] = buf[i];
        buf[i] = t;
        i --;
        j ++;
    }
}
