/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qterisse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 15:44:26 by qterisse          #+#    #+#             */
/*   Updated: 2022/08/21 15:52:31 by qterisse         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_CONVERT_H
# define FT_CONVERT_H

# include <stdlib.h>
# include <unistd.h>
# include "value.h"

int		check_value(char *value);
int		is_zero(char *str);
int		is_pow(char *str);
char	*get_left_part(char *total_str, char *right_part);
int		convert_tens(char *numeric_val, t_value *dict, int i);
int		convert_number_part(char *numeric_val, t_value *dict, int i);
void	convert_number(char *numeric_val, t_value *dict);
void	free_dict(t_value *dict);
int		ft_strlen(char *str);
char	*str_put_zero(char *str, int len, int ind);
char	*get_thousands(char *numeric_value);
void	print(char *string);
int		str_equal(char *str1, char *str2);
char	*translate(char *numeric_value, t_value *dict);
void	trim_dict(t_value *dict);

#endif
