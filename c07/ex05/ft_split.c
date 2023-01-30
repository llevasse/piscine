/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llevasse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 07:10:02 by llevasse          #+#    #+#             */
/*   Updated: 2022/08/17 18:06:38 by llevasse         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

typedef struct s_var
{
	char	**res;
	int		i;
	int		j;
	int		k;
	int		o;
}	t_var;

int	nb_occurence(char *str, char *charset)
{
	int	i;
	int	j;
	int	count;

	i = 0;
	j = 0;
	count = 0;
	while (str[i] != '\0')
	{
		if (str[i] == charset[j])
		{
			while (str[i] == charset[j])
			{
				i++;
				j++;
			}
			if (charset[j] == '\0')
				count++;
			else
				i = i - j;
			j = 0;
		}
		i++;
	}
	return (count + 1);
}

int	is_sep(char *str, char *charset)
{
	int	i;

	i = 0;
	while (charset[i] != '\0')
	{
		if (charset[i] != str[i])
			return (1);
		i++;
	}
	return (0);
}

int	skip_sep(int i, int k, char *str, char *charset)
{
	while (is_sep(str + i, charset) == 0)
	{
		i += k;
	}
	return (i);
}

t_var	follow_split(char *str, char *charset, t_var var)
{
	while (str[var.i] == charset[var.k])
	{
		var.i++;
		var.k++;
	}
	if (charset[var.k] == '\0')
	{
		var.i = skip_sep(var.i, var.k, str, charset);
		var.o++;
		var.j = 0;
	}
	else
	{
		var.i = var.i - var.k;
		var.res[var.o][var.j] = str[var.i];
		var.res[var.o][var.j + 1] = '\0';
		var.i++;
		var.j++;
	}
	var.k = 0;
	return (var);
}

char	**ft_split(char *str, char *charset)
{
	t_var	var;

	var.k = 0;
	var.o = 0;
	var.i = 0;
	var.j = 0;
	var.res = malloc(sizeof(str) * nb_occurence(str, charset));
	while (str[var.i] != '\0')
	{
		if (var.j == 0)
			var.res[var.o] = malloc(sizeof(str));
		while (str[var.i] != charset[var.k])
		{
			var.res[var.o][var.j] = str[var.i];
			var.j++;
			var.i++;
			if (str[var.i] == '\0')
				return (var.res);
		}
		var = follow_split(str, charset, var);
	}
	return (var.res);
}
