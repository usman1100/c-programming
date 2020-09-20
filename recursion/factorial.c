#include <stdio.h>


unsigned long long factorial(int n){

	if(n == 0) return 1;
	return n*factorial(n-1);

}

int main()
{
	unsigned long long x;

	x = factorial(3);

	printf("%llu\n", x);
}