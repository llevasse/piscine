/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do-op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llevasse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 06:58:14 by llevasse          #+#    #+#             */
/*   Updated: 2022/08/22 07:51:56 by llevasse         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_atoi(char *str);
int		ft_add(int a, int b);
int		ft_minus(int a, int b);
int		ft_divide(int a, int b);
int		ft_multiply(int a, int b);
int		ft_modulo(int a, int b);
void	ft_putnbr(int nb);

int	is_sign(char c)
{
	if (c == '+')
		return (0);
	else if (c == '-')
		return (1);
	else if (c == '/')
		return (2);
	else if (c == '*')
		return (3);
	else if (c == '%')
		return (4);
	return (5);
}

void	print_func(int a, int b, int sign)
{
	int	(*func_ptr[5])(int a, int b);

	func_ptr[0] = ft_add;
	func_ptr[1] = ft_minus;
	func_ptr[2] = ft_divide;
	func_ptr[3] = ft_multiply;
	func_ptr[4] = ft_modulo;
	if (sign == 2 && b == 0)
	{
		write(1, "Stop : division by zero", 24);
		return ;
	}
	if (sign == 4 && b == 0)
	{
		write(1, "Stop : modulo by zero", 22);
		return ;
	}
	ft_putnbr((*func_ptr[sign])(a, b));
}

void	ft_putchar(char p)
{
	write(1, &p, 1);
}

void	ft_putnbr(int nb)
{
	if (nb < 0)
	{
		write(1, "-", 1);
		ft_putnbr(nb * -1);
	}
	else if (nb < 10)
	{
		ft_putchar(nb + '0');
	}
	else
	{
		ft_putnbr(nb / 10);
		ft_putchar(nb % 10 + '0');
	}
}

int	main(int ac, char **av)
{
	int	a;
	int	b;
	int	sign;

	if (ac != 4)
		return (0);
	a = ft_atoi(av[1]);
	b = ft_atoi(av[3]);
	sign = is_sign(av[2][0]);
	if (sign == 5)
	{
		write (1, "0\n", 2);
		return (0);
	}
	print_func(a, b, sign);
}
