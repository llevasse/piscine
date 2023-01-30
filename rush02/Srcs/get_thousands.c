/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mallaf <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 16:14:03 by mallaf            #+#    #+#             */
/*   Updated: 2022/08/20 21:25:29 by qterisse         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	index;

	index = 0;
	while (str[index] != '\0')
	{
		index++;
	}
	return (index);
}

char	*writestr(char *str, int len, int ind)
{
	while (ind < len)
	{
		str[ind] = '0';
		ind++;
	}
	str[ind] = '\0';
	return (str);
}

char	*get_thousands(char *numeric_value)
{
	int		len;
	int		ind;
	char	*str;

	ind = 1;
	len = ft_strlen(numeric_value);
	str = malloc (sizeof(char *) * (len + 1));
	str[0] = '1';
	if (len == 3)
	{
		while (ind < len)
		{
			str[ind] = '0';
			ind++;
		}
		str[ind] = '\0';
	}
	len--;
	while (len % 3 != 0)
		len--;
	len++;
	str = writestr(str, len, ind);
	return (str);
}
