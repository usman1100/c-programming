#include<stdio.h>
#include<stdlib.h>


int main()
{
	int number = 9;
	int* pointer = &number;
	printf("%p\n", &number);
	printf("%p\n", pointer);

	*pointer = 43;
	printf("%d\n", number);
	printf("%d\n", *pointer);


	*pointer += 12;
	printf("%d\n", number);
	printf("%d\n\n", *pointer);

	for (int i = 0; i < *pointer; ++i)
		printf("%d\t\t", *pointer);
	
	printf("\n");
	printf("%lu\n", sizeof(pointer));
	printf("%lu\n", sizeof(number));




}