/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llevasse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 19:49:25 by llevasse          #+#    #+#             */
/*   Updated: 2022/08/18 09:36:44 by llevasse         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>

int	main(int ac, char **av)
{
	int		fd;
	char	buff[1];
	int		pos;

	if (ac == 1)
		write(1, "File name missing.\n", 19);
	else if (ac != 2)
		write(1, "Too many arguments.\n", 20);
	else
	{
		fd = open(av[1], O_RDONLY);
		if (fd == -1)
			write(1, "Cannot read file.\n", 18);
		else
		{
			pos = read(fd, buff, 1);
			while (pos > 0)
			{
				write(1, buff, 1);
				pos = read(fd, buff, 1);
			}
		}
	}
}
