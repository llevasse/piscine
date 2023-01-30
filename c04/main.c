#include <stdlib.h>
#include <stdio.h>

int ft_atoi(char *str);

int main(void)
{
	int r;

	r = ft_atoi(" ---+--+1234ab567");
	printf("%d\n", r);
}
