/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cat.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llevasse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 10:02:59 by llevasse          #+#    #+#             */
/*   Updated: 2022/08/18 18:05:55 by llevasse         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>

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

/*void	combine_arg(int ac, char **av)
{

}
*/
int	main(int ac, char **av)
{
	int		i;
	int		fd;
	char	buff[1];
	int		pos;

	i = 0;
	i = 1;
	while (i < ac)
	{
		fd = open(av[i], O_RDONLY);
		if (fd == -1)
			write(1, "No such file or directory\n", 30);
		else
		{
			pos = read(fd, buff, 1);
			while (pos > 0)
			{
				write(1, buff, 1);
				pos = read(fd, buff, 1);
			}
		}
		i++;
	}
}
