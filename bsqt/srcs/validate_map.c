/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validate_map.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llevasse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 19:16:31 by llevasse          #+#    #+#             */
/*   Updated: 2022/08/24 16:53:13 by llevasse         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	check_ch(char c, t_map *map)
{
	if (c == map->full || c == map->empty || c == map->obstacle)
		return (1);
	return (0);
}

int	ft_check_map(t_map	*map)
{
	int	i;
	int	j;
	int	count_length;

	count_length = 0;
	i = 0;
	j = 0;
	while (map->lines[i] != NULL)
	{
		while (map->lines[i][j] != '\0')
		{
			count_length++;
			if (check_ch(map->lines[i][j], map) == 0)
				return (0);
			j++;
		}
		if (count_length != map->length_map - 1)
			return (0);
		count_length = 0;
		i++;
		j = 0;
	}
	return (1);
}

t_map	*import_map(char *path)
{
	t_map	*map;
	int		fd;

	map = malloc(sizeof (t_map));
	if (!map)
		return (NULL);
	fd = open(path, O_DIRECTORY);
	if (fd != -1)
		return (NULL);
	fd = open(path, O_RDONLY);
	if (fd == -1)
		return (NULL);
	map = get_map_info(map, get_first_line(path));
	map = get_map_value(map, path);
	return (map);
}

t_map	*import_value(t_map *map, char *buff, int fd, int pos)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < map->nb_line_map)
	{
		map->lines[i] = malloc(map->length_map * sizeof(t_map));
		if (!map->lines[i])
			return (NULL);
		while (buff[0] != '\n')
		{
			pos = read(fd, buff, 1);
			if (buff[0] != '\n')
				map->lines[i][j] = buff[0];
			j++;
		}
		if (buff[0] == '\n')
			pos = read(fd, buff, 1);
		i++;
		j = 0;
	}
	map->lines[i] = NULL;
	return (map);
}
