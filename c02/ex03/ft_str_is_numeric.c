/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llevasse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/07 08:57:27 by llevasse          #+#    #+#             */
/*   Updated: 2022/08/09 07:45:59 by llevasse         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	is_num(char c)
{	
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}

int	ft_str_is_numeric(char *str)
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
		if (is_num(str[pos]) == 0)
		{
			return (0);
		}
		pos++;
	}
	return (1);
}
