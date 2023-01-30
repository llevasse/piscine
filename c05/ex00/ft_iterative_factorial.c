/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llevasse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 11:06:23 by llevasse          #+#    #+#             */
/*   Updated: 2022/08/16 14:48:56 by llevasse         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	res;
	int	i;

	res = 1;
	i = 0;
	if (nb < 0)
		return (0);
	while (i < nb)
	{
		res = res * (nb - i);
		i++;
	}
	return (res);
}
