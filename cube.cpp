//A C++ program to calculate the cube of a number

//First method

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int main()

{

double number, cube;

cout<<"Enter a number: "<<endl;

cin>>number;

cube = number * number * number;

cout<<"The output is: "<<cube<<endl;

    return 0;
}

//Second method: using MACROS

//A C++ program to calculate the cube of a number, using MACROS

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

#define cube(number) (number * number * number)

int main()

{

double number, cube;

cout<<"Enter a number: "<<endl;

cin>>number;

cube = cube(number);

cout<<"The cube of the entered number [ "<<number<<" ] is: "<<cube<<endl;

    return 0;
}

