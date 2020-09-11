#include<iostream>

using namespace std;

int puzzle(int n){

        cout << n << ' ';

        if (n==1)

            return 1;

        if (n%2 == 0)

            return 1 + puzzle(n/2 + 1);

        if (n%3 == 0)

            return 2 + puzzle(n/3);

         else

            return 10 + puzzle(n%10);

} 

int main(){

        cout << puzzle(18) << endl;

        return 0;

}