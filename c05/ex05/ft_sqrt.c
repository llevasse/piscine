/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llevasse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 17:03:54 by llevasse          #+#    #+#             */
/*   Updated: 2022/08/17 13:51:02 by llevasse         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	i;

	i = 1;
	while (i < 46341)
	{
		if (i * i == nb)
			return (i);
		i++;
	}
	return (0);
}
