/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llevasse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/12 09:51:11 by llevasse          #+#    #+#             */
/*   Updated: 2022/08/15 14:15:57 by llevasse         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*res;
	int	i;

	i = 0;
	if (min >= max)
		return (0);
	res = malloc((max - min) * sizeof(int));
	if (!res)
		return (NULL);
	while (min < max)
	{
		res[i] = min;
		min++;
		i++;
	}
	return (res);
}
