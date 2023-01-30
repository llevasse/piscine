/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llevasse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/06 09:02:15 by llevasse          #+#    #+#             */
/*   Updated: 2022/08/25 08:52:02 by llevasse         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	pos;
	int	i;

	pos = 0;
	while (pos <= size / 2)
	{
		i = tab[(size-1) - pos];
		tab[(size - 1) - pos] = tab[pos];
		tab[pos] = i;
		pos++;
	}
	for(int j = 0; j < size; j++){
		printf("%d | %d \n", j, tab[j]);
	}
}
