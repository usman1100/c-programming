#include<stdio.h>

int counter = 0;

int main()
{

	for (int i = 1; i <= 10; ++i)
	{
		counter += counter+i;
	}

	printf("%d\n", counter);

	do{
		counter *= 2;
	}
	while(counter < 4096);

	printf("%d\n", counter);

	if(counter > 8000) counter -= 3088;

	for (int i = 0; i < 10; ++i)
	{
		counter -= 20;
	}

	printf("%d\n", counter);

	return 0;
}