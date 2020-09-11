#include <iostream>
using namespace std;

int fun(int x)
{

    return (x % 3 + 1);
}
int main()
{
    int y = fun(fun(2));
    cout<<endl <<endl<<endl;
    cout << y;
    cout<<endl <<endl<<endl;
}