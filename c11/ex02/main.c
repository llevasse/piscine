#include <stdio.h>

int	ft_any(char **tab, int(*f)(char*));

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
	tab[1] = "4";
	tab[2] = NULL;
	printf("%d", ft_any(tab, check_nb));
}
