/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llevasse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 07:54:25 by llevasse          #+#    #+#             */
/*   Updated: 2022/08/15 13:42:14 by llevasse         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

unsigned int	my_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	i = 0;
	if (src[0] == '\0' || size == 0)
		return (0);
	while (src[i] != '\0' && (i < size - 1 || i <= my_strlen(dest)))
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (my_strlen(src));
}
