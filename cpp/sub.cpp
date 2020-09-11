// Question1: Write a program that takes its input from a file “test.dat”.
// The file contains a group of type double number separated by blanks and/or line breaks
// Your program should read all the data and outputs the average of the numbers in the file to the screen.

#include <iostream>
#include <string>
#include <fstream>
using namespace std;

double stringToDoubleArrayAverage(string data){
    int spaces = 0;
    for (int i = 0; i < data.length(); i++)
    {
        if((data[i]) == ' ') spaces++;
    }

    double x[spaces] = {0};

    int start = 0;
    int count = 0;
    for (int i = 0; i < data.length(); i++)
    {

        if(data[i] == ' ')
        {
            x[count] = stod(data.substr(start, i));
            start = i+1;
            count++;
        }
    }

    double total = 0;
    for (int i = 0; i < count; i++)
    {
        total += x[i];
    }


    
    
    return total/count;
    

}

int main()
{
    ifstream ifs("test.dat");
    string s;
    getline(ifs, s, (char)ifs.eof());
    double avg = stringToDoubleArrayAverage(s);
    cout<<avg;

}