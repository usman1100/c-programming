#include <stdio.h>

void tail(int range){
	if(range <= 0)
		return;

	tail(range - 1);
	printf("%d ", range);
}

void head(int range){
	if(range <= 0)
		return;

	printf("%d ", range);
	head(range - 1);
}



int main()
{
	tail(5);
	printf("\n");
	head(5);
	printf("\n");
}