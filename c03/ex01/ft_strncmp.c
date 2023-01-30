/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llevasse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 16:02:13 by llevasse          #+#    #+#             */
/*   Updated: 2022/08/10 13:52:30 by llevasse         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

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
