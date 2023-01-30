/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   import_dict.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llevasse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 12:39:34 by llevasse          #+#    #+#             */
/*   Updated: 2022/08/21 13:27:06 by qterisse         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include "value.h"
#include "dict.h"

int		get_max_str_size(char *path);
int		get_nb_line(char *path);
t_value	*trim_dict(t_value *trim_dict);
t_value	*get_numeric(t_value *dict, t_dictvar *var);
t_value	*get_lexic(t_value *dict, t_dictvar *var);
t_value	*get_tab_val(t_value *dict, t_dictvar var, int *file_data);

t_value	*import_dict(char *path)
{
	int			file_data[2];
	t_dictvar	var;
	t_value		*dict;

	file_data[0] = get_max_str_size(path);
	file_data[1] = get_nb_line(path);
	var.i = 0;
	var.fd = open(path, O_RDONLY);
	dict = malloc((file_data[1] + 2) * sizeof(t_value));
	if (!dict || var.fd == -1)
		return (NULL);
	dict = get_tab_val(dict, var, file_data);
	close(var.fd);
	return (dict);
}

t_value	*get_tab_val(t_value *dict, t_dictvar var, int *file_data)
{
	while (var.i <= file_data[1] + 1)
	{
		var.pos = read(var.fd, var.buff, 1);
		dict[var.i].numeric_value = malloc(file_data[0] * sizeof(char));
		dict[var.i].lexical_value = malloc(file_data[0] * sizeof(char));
		if (!dict[var.i].lexical_value || !dict[var.i].numeric_value)
			return (NULL);
		while ((var.buff[0] == '\n' || var.buff[0] == ' ') && var.pos > 0)
			var.pos = read(var.fd, var.buff, 1);
		dict = get_numeric(dict, &var);
		dict = get_lexic(dict, &var);
	}
	return (dict);
}

t_value	*get_numeric(t_value *dict, t_dictvar *var)
{
	var->j = 0;
	while (var->buff[0] != ':' && var->pos > 0)
	{
		dict[var->i].numeric_value[var->j] = var->buff[0];
		var->pos = read(var->fd, var->buff, 1);
		var->j++;
	}
	if (var->pos == 0)
	{
		dict[var->i].numeric_value = "\0";
	}
	return (dict);
}

t_value	*get_lexic(t_value *dict, t_dictvar *var)
{
	var->j = 0;
	while (var->buff[0] != ':' && var->pos > 0)
		var->pos = read(var->fd, var->buff, 1);
	var->pos = read(var->fd, var->buff, 1);
	while (var->buff[0] != '\n' && var->pos > 0)
	{
		dict[var->i].lexical_value[var->j] = var->buff[0];
		var->pos = read(var->fd, var->buff, 1);
		var->j++;
	}
	if (var->pos == 0)
	{
		dict[var->i].lexical_value = "\0";
	}
	var->i++;
	return (dict);
}
