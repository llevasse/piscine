/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llevasse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 09:25:01 by llevasse          #+#    #+#             */
/*   Updated: 2022/08/04 14:25:52 by llevasse         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_putchar(char a)
{
	write(1, &a, 1);
}

void	ft_print_comb2(void)
{
	int	n;
	int	i;

	n = 0;
	i = 0;
	while (n <= 99)
	{
		i = n;
		while (i <= 99)
		{
			if (i != n)
			{
				ft_putchar(n / 10 + '0');
				ft_putchar(n % 10 + '0');
				write(1, " ", 1);
				ft_putchar(i / 10 + '0');
				ft_putchar(i % 10 + '0');
				if (n != 98)
					write(1, ", ", 2);
			}
			i++;
		}
		n++;
	}
}
