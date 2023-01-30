/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llevasse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/12 07:26:12 by llevasse          #+#    #+#             */
/*   Updated: 2022/08/12 08:50:18 by llevasse         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

char	*sort(int argc, char *argv[])
{
	int		i;
	int		o;
	char	*temp;

	i = 1;
	while (i < argc - 1)
	{
		o = 0;
		while (argv[i][o] != '\0' && argv[i][o] == argv[i + 1][o])
			o++;
		if (argv[i][o] > argv[i + 1][o])
		{
			temp = *(argv + i);
			argv[i] = *(argv + (i + 1));
			argv[i + 1] = temp;
		}
		i++;
	}
	return (*argv);
}

int	is_sorted(int argc, char *argv[])
{
	int		i;
	int		o;

	i = 1;
	while (i < argc - 1)
	{
		o = 0;
		while (argv[i][o] != '\0' && argv[i][o] == argv[i + 1][o])
		{
			o++;
		}
		if (argv[i][o] > argv[i + 1][o])
			return (0);
		i++;
	}
	return (1);
}

int	main(int argc, char *argv[])
{
	int	i;

	while (is_sorted(argc, argv) == 0)
		*argv = sort(argc, argv);
	i = 1;
	while (i < argc)
	{
		ft_putchar(argv[i]);
		write(1, "\n", 1);
		i++;
	}
}
