/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   trim_dict.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mallaf <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 10:34:32 by mallaf            #+#    #+#             */
/*   Updated: 2022/08/21 13:31:11 by qterisse         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <stdio.h>
#include "value.h"

int	ft_strlen(char *str);
int	str_equal(char *str1, char *str2);

int	iswhitespace(char a)
{
	if ((a >= 9 && a <= 13) || a == 32)
		return (1);
	else
		return (0);
}

char	*ft_trim(char *str)
{
	int		i;
	int		len;

	i = 0;
	len = ft_strlen(str) - 1;
	while (iswhitespace(str[i]))
		i++;
	while (iswhitespace(str[len]))
		len--;
	str[len + 1] = '\0';
	return (&str[i]);
}

void	trim_dict(t_value *dict)
{
	int	i;

	i = 0;
	while (!str_equal(dict[i].numeric_value, "\0"))
	{
		dict[i].numeric_value = ft_trim(dict[i].numeric_value);
		dict[i].lexical_value = ft_trim(dict[i].lexical_value);
		i++;
	}
}
