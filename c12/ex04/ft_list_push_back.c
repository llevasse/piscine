/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llevasse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 14:03:45 by llevasse          #+#    #+#             */
/*   Updated: 2022/08/23 18:50:24 by llevasse         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"



#include <stdio.h>

t_list	*ft_create_elem(void *data);

int	ft_list_size(t_list *begin_list)
{
	int i;

	i = 0;
	while (begin_list[i].next != 0)
	{
		i++;
	}

	return (i);
}

void	ft_list_push_back(t_list **begin_list, void *data)
{
	int	i;
	t_list	*tmp;

	i = 0;
	tmp = ft_create_elem(data);

	while (begin_list[i]->next != 0)
		i++;

	if (begin_list[3]->next == 0)
		*begin_list[ft_list_size(*begin_list)]->next = *tmp;
	
}
