/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qterisse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 13:47:14 by qterisse          #+#    #+#             */
/*   Updated: 2022/08/22 11:27:53 by llevasse         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ft_parser.h"
#include "ft_convert.h"
#define DICT_FILENAME "dict/numbers.dict"

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
	convert_number(value_to_convert, dictionnary);
	free_dict(dictionnary);
	print("\n");
	return (0);
}
