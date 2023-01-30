
#include <stdio.h>

int main(void)
{
	int *i[5];
	int **ptr;

	ptr = i;
	printf("%d\n", ft_ultimate_range(ptr, 5, 19));
}
