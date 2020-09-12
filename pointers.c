#include<stdio.h>


int main()
{
	 int number = 9;
	 int* pointer = &number;
	 printf("%p\n", &number);
	 printf("%p\n", pointer);

	 *pointer = 43;
	 printf("%d\n", number);
	 printf("%d\n", *pointer);
}