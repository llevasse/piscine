/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llevasse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/07 09:56:17 by llevasse          #+#    #+#             */
/*   Updated: 2022/08/08 11:19:42 by llevasse         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	is_upperchar(char c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}

char	to_lowcase(char c)
{
	return (c = c + 32);
}

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (is_upperchar(str[i]) == 1)
			str[i] = to_lowcase(str[i]);
		i++;
	}
	return (str);
}
