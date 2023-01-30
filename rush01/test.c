int	ft_check_row_left(int **tab, int **spec)
{
	int table[5];
	while (table[0] < 4)
	{
		table[1] = 0; /* o */
		table[2] = 1; /* count */
		table[3] = spec[2][table[0]]; /* ifs */
		table[4] = tab[table[0]][0]; /* mark */
		while (table[1] < 4)
		{
			if (table[4] < tab[table[0]][table[1]])
			{
				table[4] = tab[table[0]][table[1]];
				table[2] += 1;
			}
			table[1] += 1;
		}
		if (table[2] != table[3])
			return (0);
		table[0] += 1;
	}
	return (1);
}


#include <stdio.h>
int main(void)
{

	int *tab[4];
	
	int tab1[4] = {3, 1, 4, 2};
	int tab2[4] = {4, 3, 2, 1};
	int tab3[4] = {2, 4, 1, 3};
	int tab4[4] = {1, 2, 3, 4};
	tab[0] = tab1;
	tab[1] = tab2;
	tab[2] = tab3;
	tab[3] = tab4;


	int *spec[4];
	int spec1[4] = {2, 3, 1, 3};
	int spec2[4] = {3, 2, 2, 1};
	int spec3[4] = {2, 1, 2, 4};
	int spec4[4] = {2, 4, 2, 1};
	spec[0] = spec1;
	spec[1] = spec2;
	spec[2] = spec3;
	spec[3] = spec4;

	printf("%d\n", ft_check_row_left(tab, spec));
}
