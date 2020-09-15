#include <stdio.h>
typedef int INT32;
typedef char CHAR8;

int main()
{
    INT32 x;
    CHAR8 c;

    c = getchar();
    x = (INT32)c;
    printf("\n%d\n",x);
}
