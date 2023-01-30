/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llevasse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/07 00:49:43 by llevasse          #+#    #+#             */
/*   Updated: 2022/08/08 12:18:50 by llevasse         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	is_lower(char c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}

int	is_upper(char c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}

int	ft_str_is_alpha(char *str)
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
		if (is_lower(str[pos]) == 0 && is_upper(str[pos]) == 0)
			return (0);
		pos++;
	}
	return (1);
}
