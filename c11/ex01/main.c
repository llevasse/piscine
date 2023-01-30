#include <stdio.h>

int	*ft_map(int *tab, int length, int(*f)(int));

int add_nb(int nbr)
{
	return (nbr + 42);
}

int main()
{
	int tab[5];
	int *res;
	tab[0] = 0;
	tab[1] = 1;
	tab[2] = 2;
	tab[3] = 3;
	tab[4] = 4;
	res = ft_map(tab, 5, add_nb);
	printf("%d", res[4]);
}
