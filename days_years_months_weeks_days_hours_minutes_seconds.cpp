//A C++ program to convert days into years, months, weeks, days, hours, minutes and seconds.

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int main()

{

int years, months, weeks, days, hours, minutes, seconds;

cout<<"Enter the number of days you would like to convert: "<<endl;

cin>>days;

years = days/365;

months = days/30;

weeks = days/7;

hours =  24*days;

minutes = 1440*days;

seconds = 86400*days;

cout<<days<<" days are equivalent to "<<years<<" years, "<<months<<" months, "<<weeks<<" weeks, "<<hours<<" hours, "<<minutes<<" minutes, "<<seconds<<" seconds. "<<endl;

    return 0;
}
