#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    
    int dividend, divisor, quotient, remainder;
    
    cout<<"Enter a dividend: ";
    
    cin>> dividend;
    
    cout<<"Enter a divisor: ";
    
    cin>> divisor;
    
    quotient = dividend / divisor;
    
    remainder = dividend % divisor;
    
    cout<< "The quotient is: "<< quotient<<endl;
    
    cout<< "The remainder is: "<< remainder<<endl;
     
    return 0;
}
