/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validate_map2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uenkhbay <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 14:27:32 by uenkhbay          #+#    #+#             */
/*   Updated: 2022/08/24 16:32:40 by llevasse         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
#include "header.h"

t_map	*get_map_value(t_map *map, char *path)
{
	int		fd;
	int		pos;
	char	buff[1];

	fd = open(path, O_RDONLY);
	if (fd == -1)
		return (NULL);
	pos = read(fd, buff, 1);
	map->length_map = get_map_length(path);
	map->lines = malloc((map->nb_line_map) * sizeof(t_map));
	if (!map->lines)
		return (NULL);
	while (pos > 0 && buff[0] != '\n')
		pos = read(fd, buff, 1);
	pos = read(fd, buff, 1);
	map = import_value(map, buff, fd, pos);
	close(fd);
	return (map);
}

int	get_map_length(char *path)
{
	int		fd;
	int		count;
	int		pos;
	char	buff[1];

	fd = open(path, O_RDONLY);
	count = 0;
	pos = 1;
	while (pos > 0 && buff[0] != '\n')
	{
		pos = read(fd, buff, 1);
	}
	pos = read(fd, buff, 1);
	while (pos > 0 && buff[0] != '\n')
	{
		pos = read(fd, buff, 1);
		count++;
	}
	close(fd);
	return (count);
}

t_map	*get_map_info(t_map *map, char *line)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (line[i] != '\0')
		i++;
	i -= 1;
	map->full = line[i - 1];
	map->obstacle = line[i - 2];
	map->empty = line[i - 3];
	line[i - 3] = '\0';
	map->nb_line_map = ft_atoi(line);
	return (map);
}

int	get_first_line_length(char *path)
{
	int		fd;
	int		count;
	int		pos;
	char	buff[1];

	fd = open(path, O_RDONLY);
	count = 0;
	pos = 1;
	while (pos > 0 && buff[0] != '\n')
	{
		pos = read(fd, buff, 1);
		count++;
	}
	close(fd);
	return (count);
}

char	*get_first_line(char *path)
{
	int		pos;
	int		fd;
	char	buff[1];
	char	*line;
	int		i;

	fd = open(path, O_RDONLY);
	i = 0;
	pos = 1;
	line = malloc(get_first_line_length(path) * sizeof(char));
	if (!line)
		return (NULL);
	while (pos > 0 && buff[0] != '\n')
	{
		pos = read(fd, buff, 1);
		line[i] = buff[0];
		i++;
	}
	return (line);
}
