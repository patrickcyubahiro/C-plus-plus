//Below is a C++ program that allows an end user to answer Yes or No to a simple "Yes" or "No" question. This program will re-ask the same question, as long as the answer is neither Yes nor No.

//Since C++ is case sensitive, I have also set up the program to accept both upper and lower case letters of the first letter of the allowed answers, since they both basically signify the same thing.

#include <iostream>

#include <string>

using namespace std;

int main() {
     
   string input;

   do {
       cout << "Are you interested in learning how to solve problems through coding?" <<endl;
       
       cout << "Choose Yes or No" <<endl;
       
       cin >> input;

       if ((input == "Yes") || (input == "yes"))
       
       {

        cout << "That is one of the ways of becoming a software engineer.";
        
        break;

       } 
       
       else if ((input == "No") || (input == "no"))
       
       {

        cout << "You have little possibility of becoming a computer engineer."<<endl;
        
        break;
        
       }

        } while ((input != "Yes" && input != "No") || (input != "yes" && input != "no"));

   return 0;
 }
