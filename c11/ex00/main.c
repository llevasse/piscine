#include <stdio.h>

void	ft_foreach(int *tab, int length, void(*f)(int));

void putnbr(int nbr)
{
	printf("%d", nbr);
}

int main()
{
	int tab[5] = {0, 1, 2, 3, 4};
	ft_foreach(tab, 5, putnbr);
}
