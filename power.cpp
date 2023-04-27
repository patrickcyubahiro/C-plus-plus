// A C++ program to raise any power X to power N

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int main()

{

double X, N;

cout<<"Enter the base number: "<<endl;

cin>>X;

cout<<"Enter the exponent: "<<endl;

cin>>N;

// computes X raised to the power N

cout << endl << "The answer is: " <<pow(X, N);
     
    return 0;
}
