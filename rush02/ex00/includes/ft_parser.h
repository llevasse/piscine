/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parser.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qterisse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 15:24:25 by qterisse          #+#    #+#             */
/*   Updated: 2022/08/21 15:49:23 by qterisse         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PARSER_H
# define FT_PARSER_H

# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>
# include "value.h"
# include "dict.h"

int		get_max_str_size(char *filename);
int		get_nb_line(char *filename);
t_value	*import_dict(char *path);
t_value	*get_tab_val(t_value *dict, t_dictvar var, int *file_data);
t_value	*get_numeric(t_value *dict, t_dictvar *var);
t_value	*get_lexic(t_value *dict, t_dictvar *var);
int     index_end_last_word(char *str);
int		iswhitespace(char a);

#endif
