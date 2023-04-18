#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    
    double first_Number, second_Number, sum;
    
    cout<<"Enter the first number: ";
    
    cin>> first_Number;
    
    cout<<"Enter the second number: ";
    
    cin>> second_Number;
    
    sum = first_Number + second_Number;
    
    cout<< first_Number << " + " << second_Number << " = " << sum;
     
    return 0;
}
