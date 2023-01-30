/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llevasse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/07 17:30:51 by llevasse          #+#    #+#             */
/*   Updated: 2022/08/15 13:39:51 by llevasse         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	get_state(char c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else if (c >= 97 && c <= 122)
		return (2);
	else if (c >= 65 && c <= 90)
		return (3);
	else
		return (0);
}

char	*ft_strcapitalize(char *str)
{	
	int	i;

	i = 0;
	while (str[i])
	{
		if (get_state(str[i]) == 3)
			str[i] = str[i] + 32;
		i++;
	}
	i = 0;
	while (str[i])
	{
		if (get_state(str[i]) == 0)
		{
			if (get_state(str[i + 1]) == 2)
				str[i + 1] = str[i + 1] - 32;
		}
		i++;
	}
	if (get_state(str[0]) == 2)
		str[0] = str[0] - 32;
	return (str);
}
