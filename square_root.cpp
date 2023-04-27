//A C++ program to find the square root of a number.

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int main()

{

int number, square_root;

cout<<"Enter a number: "<<endl;

cin>>number;

square_root = sqrt(number);

cout<<"The square root of the entered number is: " <<square_root;

    return 0;
}
