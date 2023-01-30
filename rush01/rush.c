/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llevasse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/13 07:12:04 by llevasse          #+#    #+#             */
/*   Updated: 2022/08/15 15:53:55 by llevasse         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int	**apply_memory(int i)
{
	int	**spec;
	int	*spec_u;
	int	*spec_d;
	int	*spec_l;
	int	*spec_r;

	spec = malloc((i * 2) * (sizeof(int)));
	spec_u = malloc(i / 4 * (sizeof(int)));
	spec_d = malloc(i / 4 * (sizeof(int)));
	spec_l = malloc(i / 4 * (sizeof(int)));
	spec_r = malloc(i / 4 * (sizeof(int)));
	spec[0] = spec_u;
	spec[1] = spec_d;
	spec[2] = spec_l;
	spec[3] = spec_r;
	return (spec);
}

void	print_ans(int **ans)
{
	int	i;
	int	j;
	int	u;

	i = 0;
	j = 0;
	u = 0;
	while (ans[0][i] != '\0')
		i++;
	while (u < 4)
	{
		j = 0;
		while (ans[u][j] != '\0')
		{
			if (j < i - 1)
				write(1, &ans[u][j], 1);
			else
			{
				write(1, &ans[u][j], 1);
				write(1, "\n", 1);
			}
			j++;
		}
		u++;
	}
}

void	end_main(int *var, char **argv, int **spec)
{
	var[0] = 0;
	while (argv[1][var[0]] != '\0' && var[2] < 4)
	{
		if (argv[1][var[0]] >= '0' && argv[1][var[1]] <= '9')
		{
			spec[var[2]][3] = argv[1][var[0]];
			var[3] += 1;
		}
		if (var[3] >= var[1] / 4)
		{
			var[3] = 0;
			var[2] += 1;
		}
		var[0] += 1;
	}
	print_ans(spec);
}

int	main(int argc, char **argv)
{
	int		**spec;
	int		var[4];

	var[0] = 0;
	var[1] = 0;
	var[2] = 0;
	var[3] = 0;
	argc = 1;
	while (argv[1][var[0]] != '\0')
	{
		if (argv[1][var[0]] >= '0' && argv[1][var[0]] <= '9')
			var[1] += 1;
		var[0] += 1;
	}
	if (var[1] != 16)
		printf("Error\n");
	else
	{
		spec = apply_memory(var[1]);
		end_main(var, argv, spec);
	}
}
