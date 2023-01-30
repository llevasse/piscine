/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llevasse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 18:51:31 by llevasse          #+#    #+#             */
/*   Updated: 2022/08/16 15:37:29 by llevasse         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;
	int	o;

	i = 0;
	o = 2;
	if (nb == 0 || nb == 1 || (nb != 2 && nb % 2 == 0) \
			|| (nb != 3 && nb % 3 == 0))
		return (0);
	while (o <= nb / 2)
	{
		if (nb % o == 0)
			return (0);
		o++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	int	i;
	int	found;

	i = nb + 1;
	found = 0;
	if (ft_is_prime(nb) == 1)
		return (nb);
	while (found == 0)
	{
		if (ft_is_prime(i) == 1)
		{
			found = 1;
			return (i);
		}
		i++;
	}
	return (0);
}
