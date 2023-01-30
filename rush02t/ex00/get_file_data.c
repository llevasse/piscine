/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_file_data.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llevasse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 19:27:33 by llevasse          #+#    #+#             */
/*   Updated: 2022/08/20 19:54:31 by llevasse         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include "value.h"
#include "dict.h"

int	get_max_str_size(char *filename)
{
	int		var[3];
	char	buff[1];
	int		pos;

	var[0] = 0;
	var[1] = 0;
	var[2] = open(filename, O_RDONLY);
	if (var[2] == -1)
		return (0);
	pos = read(var[2], buff, 1);
	if (buff[0] == '\n')
			var[0]++;
	while (pos > 0)
	{
		pos = read(var[2], buff, 1);
		var[1]++;
		if (buff[0] == '\n')
		{
			if (var[1] > var[0])
				var[0] = var[1];
			var[1] = 0;
		}
	}
	close(var[2]);
	return (var[0]);
}

int	get_nb_line(char *filename)
{
	int		nb;
	int		fd;
	char	buff[1];
	int		pos;

	nb = 0;
	fd = open(filename, O_RDONLY);
	if (fd != -1)
	{
		pos = read(fd, buff, 1);
		if (buff[0] == '\n')
				nb++;
		while (pos > 0)
		{
			pos = read(fd, buff, 1);
			if (buff[0] == '\n')
				nb++;
		}
	}
	close(fd);
	return (nb - 1);
}
