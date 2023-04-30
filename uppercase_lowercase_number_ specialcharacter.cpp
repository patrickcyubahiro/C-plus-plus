//A C++ program that checks whether the entered character is an uppercase, lowercase, number or special character.

#include <cmath>

#include <cstdio>

#include <vector>

#include <iostream>

#include <algorithm>

using namespace std;

int main()

{

char ch;

cout<<"Enter a character: "<<endl;

cin>>ch;

if((ch>=65) && (ch<=90))
{ 
    cout<<"The entered character [ "<<ch<<" ] is an UPPERCASE character."<<endl; 
} 

else if((ch>=48) && (ch<=57))
{ 
    cout<<"The entered character [ "<<ch<<" ] is a DIGIT."<<endl; 
} 

else if((ch>=97) && (ch<=122))
{ 
    cout<<"The entered character [ "<<ch<<" ] is a LOWERCASE character."<<endl; 
} 
else 
{ 
    cout<<"The entered character [ "<<ch<<" ] is a SPECIAL character."<<endl;
} 

return 0; 
}
