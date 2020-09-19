#include <stdio.h>

void Tables(int n, int times, int i){
	if(i > times) return;

	printf("%d X %d = %d\n", n, i, n*i);
	Tables(n, times, i+1);

}

int main()
{
	Tables(5, 10, 1);
}