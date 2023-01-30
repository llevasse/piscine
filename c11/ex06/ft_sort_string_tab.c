/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_string_tab.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llevasse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 08:14:19 by llevasse          #+#    #+#             */
/*   Updated: 2022/08/22 08:43:55 by llevasse         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	pos;

	pos = 0;
	while (s1[pos] != '\0')
	{
		if (s1[pos] != s2[pos])
			return (s1[pos] - s2[pos]);
		pos++;
	}
	return (s1[pos] - s2[pos]);
}

void	swap_ptr(char **str_a, char **str_b)
{
	char	*temp;

	temp = *str_a;
	*str_a = *str_b;
	*str_b = temp;
}

int	is_sorted(char	**tab)
{
	int	i;

	i = 1;
	while (tab[i] != NULL)
	{
		if (ft_strcmp(tab[i - 1], tab[i]) > 0)
			return (0);
		i++;
	}
	return (1);
}

void	ft_sort_string_tab(char **tab)
{
	int		i;

	while (is_sorted(tab) == 0)
	{
		i = 1;
		while (tab[i] != NULL)
		{
			if (ft_strcmp(tab[i - 1], tab[i]) > 0)
				swap_ptr(&tab[i - 1], &tab[i]);
			i++;
		}
	}
}
