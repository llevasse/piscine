/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tail.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llevasse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 18:12:31 by llevasse          #+#    #+#             */
/*   Updated: 2022/08/24 12:39:35 by llevasse         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

int	ft_atoi(char *str);

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	pos;

	pos = 0;
	if (n == 0)
		return (0);
	while (s1[pos] && s1[pos] == s2[pos] && pos < n - 1)
		pos++;
	return (s1[pos] - s2[pos]);
}

void	print_last(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

int	get_option(int ac, char **av)
{
	int	i;
	int	bytes_to_read;

	i = 0;
	bytes_to_read = 0;
	while (i < ac)
	{
		if (ft_strncmp(av[i], "-c", 2) == 0)
		{
			bytes_to_read = ft_atoi(av[i + 1]);
			if (bytes_to_read < 0)
				bytes_to_read *= -1;
			break ;
		}
		i++;
	}
	return (bytes_to_read);
}

int	get_sizeof_file(int ac, char **av)
{
	int		i;
	int		fd;
	char	buff[1];
	int		pos;

	i = 0;
	fd = open(av[ac - 1], O_RDONLY);
	if (fd != -1)
	{
		pos = read(fd, buff, 1);
		while (pos > 0)
		{
			i++;
			pos = read(fd, buff, 1);
		}
	}
	close(fd);
	return (i);
}

int	main(int ac, char **av)
{
	int		i;
	int		pos;
	int		fd;
	char	buff[1];
	char	*res;

	res = malloc(get_sizeof_file(ac, av) * sizeof(char));
	if (!res)
		return (1);
	fd = open(av[ac - 1], O_RDONLY);
	i = 0;
	if (fd != -1)
	{
		pos = read(fd, buff, 1);
		while (pos > 0)
		{
			res[i] = buff[0];
			i++;
			pos = read(fd, buff, 1);
		}
		res[i] = '\0';
	}
	close(fd);
	print_last(res +(i - get_option(ac, av)));
}
