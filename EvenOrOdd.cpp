//A C++ program to check whether the entered number is even or odd

#include <cmath>

#include <cstdio>

#include <vector>

#include <iostream>

#include <algorithm>

using namespace std;

int main()

{

int number;

cout<<"Enter a decimal number: "<<endl;

cin>>number;

if(number%2==0)

{
    cout<<"The entered number is even."<<endl;
}

else if (number%2!=0)

{
    cout<<"The entered number is odd."<<endl;
}

else
{
    cout<<"The inout is neither even nor odd."<<endl;
}
    return 0;
}
