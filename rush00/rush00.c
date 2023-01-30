/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezanotti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/06 14:37:01 by ezanotti          #+#    #+#             */
/*   Updated: 2022/08/07 07:40:41 by llevasse         ###   ########lyon.fr   */
/*                                                                            */
/* **************************************************************************
 * */

extern void	ft_putchar(char c);

char	get_mark_rush00(int x, int y, int pos_x, int pos_y)
{
	if ((pos_x == 1 && pos_y == 1) || (pos_x == x && pos_y == y))
		return ('o');
	else if ((pos_x == 1 && pos_y == y) || (pos_x == x && pos_y == 1))
		return ('o');
	else if (pos_y == 1 && pos_x > 1 && pos_x < x)
		return ('-');
	else if (pos_y == y && pos_x > 1 && pos_x < x)
		return ('-');
	else if (pos_x == 1 && pos_y > 1 && pos_y < y)
		return ('|');
	else if (pos_x == x && pos_y > 1 && pos_y < y)
		return ('|');
	else
	{
		return (' ');
	}	
}

void	rush(int x, int y)
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
				ft_putchar(get_mark_rush00(x, y, pos_x, pos_y));
				pos_x++;
			}
			ft_putchar('\n');
			pos_x = 1;
			pos_y++;
		}
	}
}
