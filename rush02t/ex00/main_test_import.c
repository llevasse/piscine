#include <stdio.h>
#include "value.h"
#include "dict.h"

t_value *import_dict(char *path);

int main(int ac, char **av)
{
	(void)ac;
	int i;

	i = 0;

	t_value		*dict;
	dict = import_dict(av[1]);
	while (dict[i].numeric_value[0] != '\0')
	{
		printf("%s | %s\n", dict[i].numeric_value, dict[i].lexical_value);
		i++;
	}
}
