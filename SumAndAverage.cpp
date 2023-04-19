//A C++ Program to calculate the sum and the average of three numbers entered by the end-user.

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

using namespace std;

int main()

{
    
  double firstNumber, secondNumber, thirdNumber, sum, average;
    
    cout<< "Enter the first number: " << endl;
    
    cin>>firstNumber;
    
    cout << "Enter the second number: " << endl;
    
    cin>>secondNumber;
    
    cout << "Enter the third number: " << endl;
    
    cin>>thirdNumber;
    
    sum = firstNumber + secondNumber + thirdNumber;
    
    average = sum/3;
    
    cout << firstNumber << " + " << secondNumber << " + " << thirdNumber << " = " << sum <<endl;
    
        cout << " The average of the three entered numbers is: " << average <<endl;
     
    return 0;
}
