#include <stdio.h>

int sum_of_series(int n, int start){
	if(n <= 0) return start;

	sum_of_series(n-1, start+n);
}

int main()
{
	int x;

	x = sum_of_series(3, 0);

	printf("%d\n", x);

}