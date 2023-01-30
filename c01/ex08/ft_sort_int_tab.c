/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llevasse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/06 16:56:00 by llevasse          #+#    #+#             */
/*   Updated: 2022/08/06 17:21:52 by llevasse         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	pos;
	int	i;
	int	j;

	pos = 0;
	j = 0;
	while (j < size)
	{
		while (pos <= size)
		{
			if (tab[pos] > tab[pos + 1])
			{
				i = tab[pos];
				tab[pos] = tab[pos + 1];
				tab[pos + 1] = i;
			}
			pos++;
		}
		pos = 0;
		j++;
	}
}
