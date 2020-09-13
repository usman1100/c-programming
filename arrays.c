#include <stdio.h>
#include <assert.h>


int main()
{

	int array[10];

	int *p = &array[0];

	for (int i = 0; i < 10; ++i)
	{
		*p = (i+1);
		p++;
	}

	p-=10;


	for (int i = 0; i < 10; ++i)
	{
		printf("%d  ", *p);

		p++;
	}

	p-=10;

	printf("\n");

	printf("%p\n", p);
	printf("%p\n", &array[0]);

	p++;

	printf("%p\n", p);
	printf("%p\n", &array[1]);


	


	


}