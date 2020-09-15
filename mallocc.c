#include <stdio.h>
#include <stdlib.h>

const int SIZE = 100000000;

int main()
{
	int *x = malloc(sizeof(int) * SIZE);
	int i;

	for (i = 0; i < SIZE; ++i)
	{
		x[i] = i+1;
	}
	printf("Done\n");

	// for (i = 0; i < SIZE; ++i)
	// {
	// 	printf("%d\n", x[i]);
		
	// }

	char c = getchar();
	if(c == 'F')
	{
		free(x);
	}

	else
	{
		c = getchar();
	}
}