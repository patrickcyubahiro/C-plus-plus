//A C++ program to calculate the compound interest

/*The compound formula is: A = P (1 + r/n) ^ (nt)

A = the future value of the investment/loan, including interest 

P = the principal investment amount (the initial deposit or loan amount) 

r = the annual interest rate (decimal) 

n = the number of times the interest is compounded per year 

t = the number of years the money is invested or borrowed for */

#include <cmath>

#include <cstdio>

#include <vector>

#include <iostream>

#include <algorithm>

using namespace std;

int main()

{

double A, P, r, n, t, nt;

cout<<"Enter the principal investment amount (the initial deposit or loan amount): "<<endl;

cin>>P;

cout<<"Enter the annual interest rate (decimal): "<<endl;

cin>>r;

cout<<"Enter the number of times the interest is compounded per year: "<<endl;

cin>>n;

cout<<"Enter the number of years the money is invested or borrowed for: "<<endl;

cin>>t;

nt = n*t;

A = P * pow(1 + (r/n), nt);

cout<<"The compound interest is: "<<A<<endl;

    return 0;
}
