#include <stdio.h>

int main()
{
	int x = 2e9;
	printf("%d\n", x);
	char c = x;
	printf("%c\n", c);
	printf("%d\n", (int)c);
}