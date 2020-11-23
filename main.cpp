//C++ Requires a Compiler to work correctly. Ensure you download either Code Blocks or Visual Studio Code

// This is how you handle a single line comment

/* Multiline notes are added in using the following format
This file is used to describe various different methods available within c++ 
This serves as documentation for future projects and as reference
*/

#include <iostream>
// iostream stands for standard input-output stream. This header file contains definitions to objects.

using namespace std;
// Means that in the scope it is present, make all the things under the std namespace available without having to prefix std:: before each of them
//Honestly it is better to not include this line instead type in std::cout. However for short programs this can be kept it (Think hello world short)

int main(){
// Main function that the program runs once it is compiled. It runs all the code synchronous (one line after another)

    cout << "Hello World!" << endl;
    //cout Means console out and << means the following whatever characters endl means end line

    /* 
    Variables (Variables are containers for storing data values):
    Variables are case sensisitive 
    type variableName = value;
    Example:
    int myNumber = 15;
    
    Data Types:
    char single character 'A'
    int stores integers (whole numbers, without decimals) 10
    double stores floating point numbers, with decimals, such as 19.99
    string stores text such as "Hello World"
    bool stores values with two states: true or false
    */

   int myAge = 24;
   //Declare Variable
   int x = 5, y = 6, z = 50;
   //Declaring Multiple Variables Examples
   cout << "I am " << myAge << " years old." << endl;
    //Console out I am your variable years old. end line.
   const int myNumber = 15;
   //Declares a constant that cannot be changed by you or anybody else unless changing this line
   int p;
   cout << "Type a number: ";
   cin >> x;
   //This is how you have the user put in sometype of information
   cout << "Your number is: " << x;
   //Console Out what the user typed in using a variable
   /*
   Arithmetic Operators and Comparison Operators: 
    Same as JavaScript + - / * % ++ -- 
   Comparison:
    == Equal to != Not Equal > Greater than < Less than >= Greater than or equal to <= Less than or equal to
   Logical Operators:
   && Logical And
   || Logical Or
   ! Logical Not
    */
   string myString = "Hello";
   cout << myString[0]; //Outputs H
    //Strings can be accessed based on indexes such as the above line
    string fullName;
    getline(cin,fullName);
    //Useful function to get multiple lines or words since cin considers a space as a terminating character
    return 0;
    //What the function returns 
}