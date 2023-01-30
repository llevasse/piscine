/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_square.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llevasse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 10:29:43 by llevasse          #+#    #+#             */
/*   Updated: 2022/08/24 16:55:27 by llevasse         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void get_square(t_map *map, t_square *list_squares)
{
	int	pos_x;
	int	pos_y;
	int	top;
	int	left;
	int	is_square;
	int i;
	int j;
	int k;
	int u;
	t_square *square;

	pos_x = 0;
	pos_y = 0;
	i = 0;
	j = 0;
	while (map->lines[i] != NULL)
	{
		while (map->lines[i][j] != '\0')
		{
			top = i;
			left = j;
			if (map->lines[top][left] == map->empty)
			{
				is_square = 1;
				square = ft_create_square(top, left);
				pos_x = 0;
				pos_y = 0;
				while (map->lines[top + pos_y][left + pos_x] == map->empty && is_square == 1)
				{
					u = 1;
					k = 1;
					while (j < (top + pos_y) && map->lines[j][u])
					{
						while (u < (left + pos_x))
						{
							if (map->lines[j][u] != map->empty)
								is_square = 0;
							u++;
						}
						j++;
					}
					pos_x++;
					pos_y++;
				}
				square->width = u;
				square->height = j;
				ft_list_push_front(&list_squares, square);
			}
			j++;
		}
		i++;
	}
}
