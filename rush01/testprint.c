/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testprint.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llevasse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/13 17:04:48 by llevasse          #+#    #+#             */
/*   Updated: 2022/08/13 17:58:52 by llevasse         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int main (void)
{
	char *tab[5];
	tab[0] = "12453";
	tab[1] = "23145";
	tab[2] = "54321";
	tab[3] = "35214";
	tab[4] = "41532";

	int i = 0;
	int j = 0;
	int u = 0;
	while (tab[0][i] != '\0')
		i++;
	while (u < 5)
	{
		j = 0;
		while (tab[u][j] != '\0')
		{
			if(j < i - 1)
				printf("%c ", tab[u][j]);
			else
				printf("%c\n", tab[u][j]);
			j++;
		}
		u++;
	}
}
