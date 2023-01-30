/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llevasse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/10 17:01:20 by llevasse          #+#    #+#             */
/*   Updated: 2022/08/19 12:17:33 by llevasse         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	put_char(char c)
{
	write(1, &c, 1);
}

int	my_len(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	check_base(char *base)
{
	int	i;
	int	j;

	if (my_len(base) <= 1)
		return (0);
	i = 0;
	while (base[i] != '\0')
	{
		j = i + 1;
		if (base[i] == '-' || base[i] == '+')
			return (0);
		while (base[j] != '\0')
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	len_base;

	len_base = my_len(base);
	if (check_base(base) != 0)
	{
		if (nbr == -2147483648)
			write (1, "-2147483648", 11);
		else if (nbr < 0)
		{
			write(1, "-", 1);
			ft_putnbr_base(nbr * -1, base);
		}
		else if (nbr < len_base)
			put_char(base[nbr % len_base]);
		else
		{
			ft_putnbr_base(nbr / len_base, base);
			put_char(base[nbr % len_base]);
		}
	}
}
