/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llevasse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 18:31:37 by llevasse          #+#    #+#             */
/*   Updated: 2022/08/05 10:05:41 by llevasse         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void ft_putchar(char);

void ft_print_combn(int);

int ft_getHighest(int);

void	ft_putnbr(int nb)
{
	if (nb < 10)
	{
		ft_putchar(nb + '0');
	}
	else
	{
		ft_putnbr(nb / 10);
		ft_putchar(nb % 10 + '0');
	}
}

int main(void){
	ft_print_combn(4);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
	write(1, "\n", 2);
}

int	ft_getHighest(int l)
{
	int	v;
	
	v = 1;

	do {
		v = v * 10;
	} while (v <= l);
	return v - 1;
}

void	ft_print_combn(int n)
{
	int	x;
	int	length;

	length = ft_getHighest(n);
	x = 0;

	write(1, "l = ", 10);
	ft_putnbr(length);
	while (x <= length)
	{
		if (x >= 10)
		{
			write(1, "sup", 4);
			ft_putnbr(x/10);
		}
		else
		{
			ft_putchar(x + '0');
		}
		x++;
	}
}
