#include <stdio.h>
int main(void)
{
	int *arr = ft_range(1, 1000);
	int i = 0;
	while (i < 1000 - 1)
	{
		printf("%d\n", arr[i]);
		i++;
	}
}
