/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llevasse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/07 06:07:41 by llevasse          #+#    #+#             */
/*   Updated: 2022/08/07 07:43:08 by llevasse         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

extern	void	ft_putchar(char c);

char	get_mark_rush03(int x, int y, int pos_x, int pos_y)
{
	if ((pos_x == 1 && pos_y == 1) || (pos_x == 1 && pos_y == y))
		return ('A');
	if ((pos_x == x && pos_y == 1) || (pos_x == x && pos_y == y))
		return ('C');
	else if (pos_y == 1 && pos_x > 1 && pos_x < x)
		return ('B');
	else if (pos_y == y && pos_x > 1 && pos_x < x)
		return ('B');
	else if (pos_x == 1 && pos_y > 1 && pos_y < y)
		return ('B');
	else if (pos_x == x && pos_y > 1 && pos_y < y)
		return ('B');
	else
	{
		return (' ');
	}
}

void	rush03(int x, int y)
{
	int	pos_x;
	int	pos_y;

	pos_x = 1;
	pos_y = 1;
	if (x > 0 && y > 0)
	{
		while (pos_y <= y)
		{
			while (pos_x <= x)
			{
				ft_putchar(get_mark_rush03(x, y, pos_x, pos_y));
				pos_x++;
			}
			ft_putchar('\n');
			pos_x = 1;
			pos_y++;
		}
	}
}
