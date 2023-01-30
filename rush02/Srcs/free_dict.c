/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_dict.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llevasse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 10:53:40 by llevasse          #+#    #+#             */
/*   Updated: 2022/08/21 13:50:20 by qterisse         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "value.h"

int	str_equal(char *str1, char *str2);

void	free_dict(t_value *dict)
{
	int	i;

	i = 0;
	while (!str_equal(dict[i].numeric_value, "\0"))
	{
		free(dict[i].numeric_value);
		i++;
	}
	free(dict);
}
