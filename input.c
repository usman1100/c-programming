#include <stdio.h>
const short LIMIT = 50;
int main()
{
	char c;
	char str[LIMIT]={""};
	// while ((c=getchar()) != EOF)
	// {
	// 	// str += c;
	// 	putchar(c);
	// }
	for (int i = 0; i < LIMIT; i++)
	{
		str[i] = i;
	}

	printf("\nSTR: %s\n", str);

}
