/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert_number.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qterisse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 15:33:39 by qterisse          #+#    #+#             */
/*   Updated: 2022/08/21 13:59:36 by qterisse         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "value.h"

void	print(char *string);
char	*get_thousands(char *numeric_value);
char	*translate(char *numeric_value, t_value *dict);
int		ft_strlen(char *string);
void	convert_number(char *numeric_val, t_value *dict);

int	ft_isspace(char c)
{
	if (c == '\n' || c == '\t' || c == '\v' || c == '\r' || c == '\f' \
			|| c == ' ')
		return (1);
	return (0);
}

int	is_zero(char *str)
{
	int i;

	i = 0;
	while (str[i] && str[i] == '0')
		i++;
	return (!str[i]);
}

int is_pow(char *str)
{
	return (str[0] == '1' && is_zero(&str[1]) && ft_strlen(str) > 2);
}

char	*get_left_part(char	*total_str, char *right_part)
{
	char	*left_part;
	int 	stop;
	int 	i;

	i = 0;
	stop = ft_strlen(total_str) - ft_strlen(right_part) + 1;
	left_part = malloc(stop * sizeof(char));
	if (!left_part)
		return (NULL);
	while (i < stop)
	{
		left_part[i] = total_str[i];
		i++;
	}
	left_part[i] = '\0';
	return (left_part);
}

int	convert_tens(char *numeric_val, t_value *dict, int i)
{
	char tens[3];

	tens[0] = numeric_val[i];
	tens[1] = '0';
	tens[2] = '\0';
	print(translate(tens, dict));
	print(translate(&numeric_val[++i], dict));
	return (i + 2);
}

int	convert_number_part(char *numeric_val, t_value *dict, int i)
{
	char	*lexical_value;
	char	*thousand_pow;
	char	*left_part;

	if (numeric_val[i] == '0')
		return (i + 1);
	lexical_value = translate(&numeric_val[i], dict);
	if (lexical_value && !is_pow(numeric_val))
	{
		print(lexical_value);
		return (ft_strlen(numeric_val));
	}
	else if (ft_strlen(&numeric_val[i]) == 2)
		return (convert_tens(numeric_val, dict, i));
	else
	{
		thousand_pow = get_thousands(&numeric_val[i]);
		left_part = get_left_part(&numeric_val[i], thousand_pow);
		convert_number(left_part, dict);
		free(left_part);
		print(translate(thousand_pow, dict));
		i += ft_strlen(get_left_part(&numeric_val[i], thousand_pow));
		free(thousand_pow);
	}
	return (i);
}

void	convert_number(char *numeric_val, t_value *dict)
{
	int 	i;

	i = 0;
	if (numeric_val[i] == '-')
	{
		print("minus");
		i++;
	}
	if (is_zero(numeric_val))
		return (print(translate("0", dict)));
	while (numeric_val[i] >= '0' && numeric_val[i] <= '9')
		i = convert_number_part(numeric_val, dict, i);
}
