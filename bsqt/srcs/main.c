/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llevasse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 10:00:13 by llevasse          #+#    #+#             */
/*   Updated: 2022/08/24 16:32:52 by llevasse         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	main(int ac, char **av)
{
	t_map		*map;
	t_square	squares;

	squares.next = 0;

	(void)ac;
	map = import_map(av[1]);
	print_map(map);
	get_square(map, &squares);
}
