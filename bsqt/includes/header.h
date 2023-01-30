/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llevasse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 10:38:28 by llevasse          #+#    #+#             */
/*   Updated: 2022/08/24 16:21:18 by llevasse         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
# define HEADER_H

#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>

typedef struct s_map
{
	int nb_line_map;
	int	length_map;
	char full;
	char empty;
	char obstacle;
	char **lines;
}	t_map;

typedef struct	s_square
{
	int pos_top_left_x;
	int pos_top_left_y;
	int	width;
	int	height;
	struct s_square *next;
}	t_square;

t_square	*ft_create_square(int pos_x, int pos_y);
void	get_square(t_map *map, t_square *list_squares);
t_map	*import_map(char *path);
t_map	*import_value(t_map *map, char *buff, int fd, int pos);
t_map	*get_map_info(t_map *map, char *line);
t_map	*get_map_value(t_map *map, char *path);
char	*get_first_line(char *path);
int	get_first_line_length(char *path);
int	ft_atoi(char *str);
int	check_char(char c);
int	get_map_length(char *path);
int ft_check_map(t_map	*map);
void	ft_list_push_front(t_square **list, t_square *new_list);
void	print_map(t_map *map);

#endif
