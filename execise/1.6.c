#include <stdio.h>

int main()
{
    char c = getchar();
    c == EOF?printf("\nEOF\n"):printf("\nNOT EOF\n");
}