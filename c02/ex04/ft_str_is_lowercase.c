/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llevasse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/07 09:05:27 by llevasse          #+#    #+#             */
/*   Updated: 2022/08/08 12:20:03 by llevasse         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	is_lowercase(char c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}

int	ft_str_is_lowercase(char *str)
{
	int	i;
	int	pos;

	i = 0;
	pos = 0;
	if (str[i] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		i++;
	}
	while (pos < i)
	{
		if (is_lowercase(str[pos]) == 0)
		{
			return (0);
		}
		pos++;
	}
	return (1);
}
