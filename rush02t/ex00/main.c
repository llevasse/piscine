/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qterisse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 13:47:14 by qterisse          #+#    #+#             */
/*   Updated: 2022/08/21 13:52:08 by qterisse         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "value.h"
#include <stdio.h>
#define DICT_FILENAME "numbers.dict"

void	print(char *string);
void	convert_number(char *numerical_val, t_value *dict);
t_value	*import_dict(char *path);
int		check_value(char *value);
void	free_dict(t_value *dict);
void	trim_dict(t_value *dict);

int	main(int argc, char **argv)
{
	char	*value_to_convert;
	t_value	*dictionnary;

	if (argc > 3 || argc == 1)
	{
		print("Main Error : Number of arguments invalid\n");
		return (1);
	}
	value_to_convert = argv[1];
	if (!check_value(value_to_convert))
		return (1);
	if (argc == 2)
		dictionnary = import_dict(DICT_FILENAME);
	else
		dictionnary = import_dict(argv[3]);
	if (dictionnary == NULL)
	{
		print("Dict Error\n");
		return (1);
	}
	trim_dict(dictionnary);
	convert_number(value_to_convert, dictionnary);
	free_dict(dictionnary);
	print("\n");
	return (0);
}
