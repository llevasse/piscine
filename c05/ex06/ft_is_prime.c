/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llevasse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 18:17:14 by llevasse          #+#    #+#             */
/*   Updated: 2022/08/16 15:37:18 by llevasse         ###   ########lyon.fr   */
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
