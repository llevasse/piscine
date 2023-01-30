/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_value.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qterisse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 11:59:27 by qterisse          #+#    #+#             */
/*   Updated: 2022/08/21 14:00:13 by qterisse         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#define ERROR_MSG "Error\n"

void	print(char *string);

int	check_value(char *value)
{
	int i;

	i = 0;
	while (value[i] && value[i] >= '0' && value[i] <= '9')
		i++;
	if (!value[i] && i > 0)
		return (1);
	print(ERROR_MSG);
	return (0);
}
