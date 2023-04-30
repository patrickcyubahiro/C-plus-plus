/*A C++ program that checks whether a character is a vowel or a consonant.*/

#include <cmath>

#include <cstdio>

#include <vector>

#include <iostream>

#include <algorithm>

using namespace std;

int main()

{

 char ch;

 int aLowercaseVowel, anUppercaseVowel; 
 
 cout<< "Enter any character: "<<endl; 
 
 cin >>ch; 

aLowercaseVowel = (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u');

anUppercaseVowel = (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U');

if (aLowercaseVowel || anUppercaseVowel)
{ 
    cout<<"The Entered Character [ "<<ch<<" ] is a Vowel."<<endl; 
} 
else
{
    cout<<"The Entered Character [ "<<ch<<" ] is neither a consonant."<<endl; 
}
return 0; 
}
