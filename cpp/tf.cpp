#include <iostream>
using namespace std;

int fun(int x)
{

    return (x % 3 + 1);
}
int main()
{
    int a = 1, b = 2, c = 3;

    if (((b / 2) == a) || c < 3)
        cout << "True";
    else
    {
        cout << "False";
    }
}