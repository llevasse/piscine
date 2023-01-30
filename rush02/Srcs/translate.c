/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   translate.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qterisse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 13:28:11 by qterisse          #+#    #+#             */
/*   Updated: 2022/08/21 13:19:02 by qterisse         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "value.h"

int	str_equal(char *str1, char *str2)
{
	int	i;

	i = 0;
	while (str1[i] && str2[i] && str1[i] == str2[i])
		i++;
	return (str1[i] == str2[i]);
}

char	*translate(char *numeric_value, t_value *dict)
{
	int	i;

	i = 0;
	while (!str_equal(dict[i].numeric_value, "\0"))
	{
		if (str_equal(dict[i].numeric_value, numeric_value))
			return (dict[i].lexical_value);
		i++;
	}
	return (NULL);
}
