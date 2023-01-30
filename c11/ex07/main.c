#include <stdio.h>

void	ft_advanced_sort_string_tab(char **tab, int (*cmp)(char *, char *));

int	ft_strcmp(char *s1, char *s2)
{
	int	pos;

	pos = 0;
	while (s1[pos] != '\0')
	{
		if (s1[pos] != s2[pos])
			return (s1[pos] - s2[pos]);
		pos++;
	}
	return (s1[pos] - s2[pos]);
}

int main(void)
{
	char *tab[4];
	tab[0] = "ex02";
	tab[1] = "ex01";
	tab[2] = "ex00";
	tab[3] = NULL;

	ft_advanced_sort_string_tab(tab, ft_strcmp);
	int i;
	i = 0;
	while (tab[i] != NULL)
	{
		printf("%d | %s\n", i, tab[i]);
		i++;
	}
}
