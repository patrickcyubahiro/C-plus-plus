//A C++ program to display the ASCII value of a character.

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int main()

{
    
 char c;

     cout << "Enter any Character : ";
     
     cin >> c;

     cout << "\nThe ASCII Value of Character [ " << c << " ] is : " << int(c)<<endl;
     
    return 0;
}
