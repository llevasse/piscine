/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llevasse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 10:44:32 by llevasse          #+#    #+#             */
/*   Updated: 2022/08/10 13:38:36 by llevasse         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	str_len(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	found(char *str, char *to_find, int i)
{
	int	o;

	o = 0;
	if (str[i] == to_find[0])
	{
		while (str[i] == to_find[o] && to_find[o] != '\0')
		{
			o++;
			i++;
		}
		if (to_find[o] == '\0')
			return (1);
	}
	return (0);
}

char	*ft_strstr(char *str, char *to_find)
{
	int	i;

	i = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[i])
	{
		if (found(str, to_find, i) == 1)
			return (str + i);
		i++;
	}
	return (0);
}
