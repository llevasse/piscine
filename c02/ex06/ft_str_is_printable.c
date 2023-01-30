/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llevasse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/07 09:31:01 by llevasse          #+#    #+#             */
/*   Updated: 2022/08/08 18:40:48 by llevasse         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	is_printable(char c)
{
	if (c >= 32 && c <= 127)
		return (1);
	else
		return (0);
}

int	ft_str_is_printable(char *str)
{
	int	i;
	int	pos;

	i = 0;
	pos = 0;
	if (str[i] == '\0')
		return (1);
	while (str[i] != '\0')
		i++;
	while (pos < i)
	{
		if (is_printable(str[pos]) == 0)
			return (0);
		pos++;
	}
	return (1);
}
