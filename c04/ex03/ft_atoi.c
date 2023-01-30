/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llevasse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/10 07:38:09 by llevasse          #+#    #+#             */
/*   Updated: 2022/08/20 08:37:11 by llevasse         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_isspace(char c)
{
	if (c == '\t' || c == '\n' || c == '\v' || \
			c == '\f' || c == '\r' || c == ' ')
		return (1);
	return (0);
}

int	ft_atoi(char *str)
{
	int	i;
	int	res;
	int	is_neg;

	is_neg = 1;
	i = 0;
	res = 0;
	while (ft_isspace(str[i]) == 1)
		i++;
	while (ft_isspace(str[i]) == 0 && (str[i] == '-' || str[i] == '+'))
	{
		if (str[i] == '-')
			is_neg *= -1;
		i++;
	}
	if (str[i] >= '0' && str[i] <= '9')
		res = str[i] - '0';
	while (str[i] != '\0' && str[i] >= '0' && str[i] <= '9')
	{
		if (str[i + 1] >= '0' && str[i + 1] <= '9')
			res = res * 10 + str[i + 1] - '0';
		i++;
	}
	return (res * is_neg);
}
