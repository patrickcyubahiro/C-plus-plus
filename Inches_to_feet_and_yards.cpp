// A C++ program to convert inches to feet and yards.

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int main()

{

double inches, feet, yards;

cout << "How many inches would you like to convert to feet and yards? : "<<endl;
     
     cin >> inches;
     
     feet = inches * 0.0833;
     
     yards = inches / 36;
     
     cout<< inches <<" inches are equivalent to " << feet << " feet and " <<yards<< " yards."<<endl;
     
    return 0;
}


//To convert inches to feet, we multiply the given value (in inches) by 0.0833

//The length in yards is equal to the length in inches divided by 36
