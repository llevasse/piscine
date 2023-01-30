/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert_checkers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mallaf <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 14:28:04 by mallaf            #+#    #+#             */
/*   Updated: 2022/08/21 14:28:07 by mallaf           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlen(char *string);

int	is_zero(char *str)
{
	int	i;

	i = 0;
	while (str[i] && str[i] == '0')
		i++;
	return (!str[i]);
}

int	is_pow(char *str)
{
	return (str[0] == '1' && is_zero(&str[1]) && ft_strlen(str) > 2);
}
