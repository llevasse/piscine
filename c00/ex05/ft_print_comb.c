/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llevasse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 07:06:27 by llevasse          #+#    #+#             */
/*   Updated: 2022/08/04 13:40:14 by llevasse         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_putchar(char a, char b, char c)
{
	write (1, &a, 1);
	write (1, &b, 1);
	write (1, &c, 1);
	if (a != '7')
		write (1, ", ", 2);
}

void	ft_print_comb(void)
{
	char	n;
	char	i;
	char	j;

	n = '0';
	i = '0';
	j = '0';
	while (n <= '9')
	{
		i = n;
		while (i <= '9')
		{
			j = i;
			while (j <= '9')
			{
				if (j != i && i != n)
				{
					ft_putchar(n, i, j);
				}
				j++;
			}
			i++;
		}
		n++;
	}
}
