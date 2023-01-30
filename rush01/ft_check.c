/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llevasse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/14 15:04:03 by llevasse          #+#    #+#             */
/*   Updated: 2022/08/21 12:11:08 by llevasse         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

typedef struct s_check{
	int	ifs;
	int	i;
	int	o;
	int	count;
	int	mark;
}	t_check;

int	ft_check_row_left(int **tab, int **spec, t_check *b)
{
	b->i = 0;
	while (b->i < 4)
	{
		b->o = 0;
		b->count = 1;
		b->ifs = spec[2][b->i];
		b->mark = tab[b->i][0];
		while (b->o < 4)
		{
			if (b->mark < tab[b->i][b->o])
			{
				b->mark = tab[b->i][b->o];
				b->count++;
			}
			b->o++;
		}
		if (b->count != b->ifs)
			return (0);
		b->i++;
	}
	return (1);
}

int	ft_check_row_right(int **tab, int **spec, t_check *b)
{
	b->i = 0;
	while (b->i < 4)
	{
		b->o = 3;
		b->count = 1;
		b->ifs = spec[3][b->i];
		b->mark = tab[b->i][3];
		while (b->o >= 0)
		{
			if (b->mark < tab[b->i][b->o])
			{
				b->mark = tab[b->i][b->o];
				b->count++;
			}
			b->o--;
		}
		if (b->count != b->ifs)
			return (0);
		b->i++;
	}
	return (1);
}

int	ft_check_column_top(int **tab, int **spec, t_check *b)
{
	b->o = 0;
	b->i = 0;
	while (b->o < 4)
	{
		b->count = 1;
		b->ifs = spec[0][b->o];
		b->mark = tab[0][b->o];
		b->i = 0;
		while (b->i < 4)
		{
			if (b->mark < tab[b->i][b->o])
			{
				b->mark = tab[b->i][b->o];
				b->count++;
			}
			b->i++;
		}
		if (b->count != b->ifs)
			return (0);
		b->o++;
	}
	return (1);
}

int	ft_check_column_bottom(int **tab, int **spec, t_check *b)
{
	b->o = 0;
	b->i = 3;
	while (b->o < 4)
	{
		b->count = 1;
		b->ifs = spec[1][b->o];
		b->mark = tab[3][b->o];
		b->i = 3;
		while (b->i >= 0)
		{
			if (b->mark < tab[b->i][b->o])
			{
				b->mark = tab[b->i][b->o];
				b->count++;
			}
			b->i--;
		}
		if (b->count != b->ifs)
			return (0);
		b->o++;
	}
	return (1);
}

int	ft_check(int **tab, int **spec)
{
	t_check	b;

	if (ft_check_row_left(tab, spec, &b) == 1)
	{
		if (ft_check_row_right(tab, spec, &b) == 1)
		{
			if (ft_check_column_top(tab, spec, &b) == 1)
			{
				if (ft_check_column_bottom(tab, spec, &b) == 1)
					return (1);
				return (0);
			}
			return (0);
		}
		return (0);
	}
	return (0);
}
