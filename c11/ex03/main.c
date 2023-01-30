#include <stdio.h>

int	ft_count_if(char **tab, int length, int(*f)(char*));

int check_nb(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '3')
			return (3);
		i++;
	}
	return (0);
}

int main(void)
{
	char *tab[3];
	tab[0] = "abc";
	tab[1] = "3";
	tab[2] = "3";
	printf("%d", ft_count_if(tab, 3, check_nb));
}
