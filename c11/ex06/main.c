#include <stdio.h>

void	ft_sort_string_tab(char **tab);


int main(void)
{
	char *tab[4];
	tab[0] = "ex02";
	tab[1] = "ex01";
	tab[2] = "ex00";
	tab[3] = NULL;

	ft_sort_string_tab(tab);
	int i;
	i = 0;
	while (tab[i] != NULL)
	{
		printf("%d | %s\n", i, tab[i]);
		i++;
	}
}
