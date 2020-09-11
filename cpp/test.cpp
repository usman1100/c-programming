#include <iostream>
#include <fstream>
using namespace std;
int main()
{

    ifstream in;
    in.open("test.dat");
    double sum = 0.0;
    int count = 0;
    double next;

    in >> next;
    while (!in.eof())
    {
        count++;
        sum += next;
        in >> next;
    }
    double average = sum / count;
    cout << average << endl;
    return 0;
}
