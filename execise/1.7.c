#include<stdio.h>

int main()
{
    printf("Enter: ");
    char c = getchar();
    if(c == EOF) printf("\n%c\n", c);
}