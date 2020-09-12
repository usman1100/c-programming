#include <stdio.h>


int main()
{
	int arr[20];
	int arrlen = sizeof(arr)/sizeof(int);

	printf("%lu\n", sizeof(arr));

	for(int i=0; i<arrlen; i++)
		printf("%d ", i+1);
}