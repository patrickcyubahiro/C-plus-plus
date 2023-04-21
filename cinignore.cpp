/*A C++ program that allows the end user to enter an integer and a floating point number, with a special feature and condition: if the user enters a floating point number where an integer is required, the program must consider only the whole number and ignore the floating points, and it must also clear the buffer to avoid assigning the floating points of the previously entered number to the next variable.*/
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int main()

{
  int firstNumber;
  
  float secondNumber;
  
  cout<<"Please input an integer:"<<endl;
  
  cin>>firstNumber;
  
  cout<<"The entered integer is: "<<firstNumber<<endl;
  
  //std::cin.ignore(256,' ');   // ignore until space
    
  std::cin.ignore(1000, '\n');  // ignore until next line
  
  cout<<"Please input a floating point number: "<<endl;
  
  cin>>secondNumber;
  
  cout<<"The entered floating point number is: "<<secondNumber<<endl;
  
  return 0;
  
}
