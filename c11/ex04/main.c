#include <stdio.h>

int	ft_is_sort(int *tab, int length, int(*f)(int, int));

int check_nb(int nb1, int nb2)
{
	if (nb1 > nb2)
		return (1);
	else if (nb1 == nb2)
		return (0);
	return (-1);
}

int main(void)
{
	int tab[5];
	tab[0] = 1;
	tab[1] = 3;
	tab[2] = 4;
	tab[3] = 3;
	tab[4] = 3;
	printf("%d", ft_is_sort(tab, 5, check_nb));
}
