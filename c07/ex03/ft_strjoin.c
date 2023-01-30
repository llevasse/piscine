/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llevasse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/12 14:02:32 by llevasse          #+#    #+#             */
/*   Updated: 2022/08/24 18:06:31 by llevasse         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*join(int size, char **strs, char *sep, char *joined)
{
	int	i;
	int	u;
	int	j;

	i = 0;
	u = 0;
	j = 0;
	while (j < size)
	{
		i = 0;
		if (u != 0)
		{
			while (sep[i] != '\0')
				joined[j++] = sep[i++];
		}
		i = 0;
		while (strs[u][i] != '\0')
			joined[j++] = strs[u][i++];
		u++;
	}
	joined[j] = '\0';
	return (joined);
}

int	len_strs(int size, char **strs)
{
	int	i;
	int	j;
	int	count;

	i = 0;
	j = 0;
	count = 0;
	while (i < size)
	{
		while (strs[i][j] != '\0')
		{
			j++;
			count++;
		}
		j = 0;
		i++;
	}
	return (count);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*joined;
	int		i;
	int		len_string;

	len_string = len_strs(size, strs);
	i = 0;
	while (sep[i] != '\0')
		i++;
	joined = malloc((len_string + (i * size)) * sizeof(char));
	if (size == 0)
		return (joined);
	joined = join(len_string, strs, sep, joined);
	return (joined);
}
