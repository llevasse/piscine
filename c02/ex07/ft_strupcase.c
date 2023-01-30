/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llevasse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/07 09:56:17 by llevasse          #+#    #+#             */
/*   Updated: 2022/08/08 10:58:36 by llevasse         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	is_lowerchar(char c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}

char	to_upcase(char c)
{
	return (c = c - 32);
}

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (is_lowerchar(str[i]) == 1)
			str[i] = to_upcase(str[i]);
		i++;
	}
	return (str);
}
