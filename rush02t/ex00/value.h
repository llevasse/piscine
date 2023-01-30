/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   value.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qterisse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 13:29:07 by qterisse          #+#    #+#             */
/*   Updated: 2022/08/20 21:18:12 by qterisse         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef VALUE_H
# define VALUE_H

typedef struct s_value
{
	char	*numeric_value;
	char	*lexical_value;
}	t_value;

#endif
