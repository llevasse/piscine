/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_func.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llevasse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 10:35:59 by llevasse          #+#    #+#             */
/*   Updated: 2022/08/24 16:15:05 by llevasse         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

t_square	*ft_create_square(int pos_x, int pos_y)
{
	t_square *square;

	square = malloc(sizeof(t_square));
	if (!square)
		return (NULL);
	square->pos_top_left_x = pos_x;
	square->pos_top_left_y = pos_y;
	return (square);
}

void	ft_list_push_front(t_square **list, t_square *new_list)
{
	new_list->next = *list;
	*list = new_list;
}
