#include <iostream>
using namespace std;

int fun(int x)
{

    return (x % 3 + 1);
}
int main()
{
    int x = 0;
    int y = 0;
    int z = 3;

    if (z = (x < y))
    {

        x += 3;

        y += 9;
    }

    else
    {

        x = y++;

        y *= 2;
    }

    cout << x << "-" << y << "-" << z;
}