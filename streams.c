#include <stdio.h>


int main()
{
	char c = ' ';
	while(c!=EOF)
	{
		// c = getchar();
		// putchar(c);
		scanf("%c%*c", &c);
		printf("%c", c);
	}
}