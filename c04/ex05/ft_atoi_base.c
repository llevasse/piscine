/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llevasse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 08:21:16 by llevasse          #+#    #+#             */
/*   Updated: 2022/08/11 09:19:34 by llevasse         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <unistd.h>

int	to_num(int c, char c1)
{
	int n;

	n = c * 10 + c1 - '0';
	return (n);
}

int change_neg(int n)
{
	if(n == 1)
		return 0;
	else
		return 1;
}

int	ft_atoi(char *str)
{
	int i;
	int res;
	int is_neg;

	i = 0;
	is_neg = 0;
	while (str[i] == ' ' || str[i] == '-' || str[i] == '+' )
	{
		if(str[i] == '-')
			is_neg = change_neg(is_neg);
		i++;
	}
	res = str[i] - '0';
	while (str[i] != '\0' && str[i] >= '0' && str[i] <= '9')
	{
		if (str[i + 1] >= '0' && str[i + 1] <= '9')
			res = to_num(res, str[i + 1]);
		i++;
	}
	if (is_neg == 1)
		res = res * -1;
	return (res);
}

int	my_len(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int check_base (char *base)
{
	if (my_len(base) <= 1)
		return 0;
	int	i;
	int	j;

	i = 0;
	while (base[i] != '\0')
	{
		j = i + 1;
		if (base[i] == '-' || base[i] == '+')
			return 0;
		while (base[j] != '\0')
		{
			if (base[i] == base[j])
				return 0;
			j++;
		}
		i++;
	}
	return 1;
}

int	ft_atoi_base(char *str, char *base)
{
	int len_base;
	int res;

	res = ft_atoi(str);
	len_base = my_len(base);
	if (check_base(base) != 0)
	{
		if (nbr < 0)
		{
			write(1, "-", 1);
			ft_putnbr_base(nbr * -1, base);
		}
		if (nbr < len_base)
			put_char(base[nbr % len_base]);
		else
		{
			ft_putnbr_base(nbr / len_base, base);
			put_char(base[nbr % len_base]);
		}
	}
}
