/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dict.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llevasse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 18:55:06 by llevasse          #+#    #+#             */
/*   Updated: 2022/08/20 19:04:11 by llevasse         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef DICT_H
# define DICT_H

typedef struct s_dictvar
{
	int		i;
	int		j;
	int		k;
	int		o;
	int		fd;
	int		pos;
	int		lex;
	char	buff[1];
	char	*temp;
}	t_dictvar;

#endif
