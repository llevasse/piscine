/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_advanced_sort_string_tab.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llevasse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 08:14:19 by llevasse          #+#    #+#             */
/*   Updated: 2022/08/22 09:05:02 by llevasse         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */


void	swap_ptr(char **str_a, char **str_b)
{
	char	*temp;

	temp = *str_a;
	*str_a = *str_b;
	*str_b = temp;
}

int	is_sorted(char	**tab, int (*cmp)(char *, char *))
{
	int	i;

	i = 1;
	while (tab[i] != 0)
	{
		if ((*cmp)(tab[i - 1], tab[i]) > 0)
			return (0);
		i++;
	}
	return (1);
}

void	ft_advanced_sort_string_tab(char **tab, int (*cmp)(char *, char *))
{
	int		i;

	while (is_sorted(tab, (*cmp)) == 0)
	{
		i = 1;
		while (tab[i] != 0)
		{
			if ((*cmp)(tab[i - 1], tab[i]) > 0)
				swap_ptr(&tab[i - 1], &tab[i]);
			i++;
		}
	}
}
