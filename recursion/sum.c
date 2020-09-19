#include <stdio.h>
#include <stdlib.h>

unsigned long long sum_of_series(int n, unsigned long long start){
	if(n <= 0) return start;

	sum_of_series(n-1, start+n);
}

int main(int argc, char *argv[])
{



	if(argc != 2)
	{
		printf("Usage: ./sum <n>\n");
		return 1;
	}


	unsigned long long x;

	x = sum_of_series(atoi(argv[1]), 0);

	printf("%llu\n", x);



}