//C++ Requires a Compiler to work correctly. Ensure you download either Code Blocks or Visual Studio Code
//C++ works from top to bottom

// This is how you handle a single line comment

/* Multiline notes are added in using the following format
This file is used to describe various different methods available within c++ 
This serves as documentation for future projects and as reference
*/
//The following are considered preprocessor commands
#include <iostream>
// iostream stands for standard input-output stream. This header file contains definitions to objects.
#include <cmath>
// This is how you include the cmath library for math operations(functions)


using namespace std;
// Means that in the scope it is present, make all the things under the std namespace available without having to prefix std:: before each of them
//Honestly it is better to not include this line instead type in std::cout. However for short programs this can be kept it (Think hello world short)


//Declaring a function outside the main function you can always declare it as void myFunction(); then define it after the main function down below:
void myFunction(){
    //myFunction() is the name of the function void means that the function does not have a return value
    //You can add as many parameters as you would like
    //Declared functions are not executed immediately they are saved for later use.
    //code to be executed
    // You can overload a function instead of having to define a whole new function. Still have to write it all out though.
};

void functionName(parameter1, parameter2,parameter3){
    //Parameters acts as variables within the function
    //You can default a parameter using an = sign like: string country = "USA"
    //code to be executed.
    // If you want it to return a value, instead of void use the data type that it will return
};

class MyClass { //Class declaration
    public: //Access specifier. The following options are available outside the class.
    //You also have available to you the words public, private (members cannot be accessed or viewed from outside the class or protected members )
    // or protected members cannot be accessed from outside the class, however, they can be accessed in inherited classes.
        int myNum; //Attribute (int variable)
        string myString; //Next Attribute
        void myMethod(){ // Method of function available to the class. could always just use void myMethod(); then declare it outside the class
            cout << "Hello World!";
        };
        MyClass(){ // Constructor are special methods that are automatically called when an object of a class is created. It has the same name as the class, followed by ():
            cout << "Hello World";
        };
};

class MyOtherClass{
    public:
        int myNumber;
};

//Example of inheritance: Where the following class absorbs everything from MyClass
class MySecondClass: public MyClass {
    public:
        string model = "Lessons";
};

//You can also inherit from multiple classes if needed just be putting a comma and the second class name
class MyChildClass: public MyClass, public MyOtherClass{

};

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
    bool stores values with two states: true or false think 0 as false and 1 as true
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
    //getline(cin,fullName);
    //Useful function to get multiple lines or words since cin considers a space as a terminating character

    /*
    Conditions and IF Statements:
    C++ supports the usual logical conditions from mathematics that is what you put in parenthesis check below.
    if to specify a block of code to be executed, if a specified condition is true
    else to specify a block of code to be executed
    else if to specify a new condition to test, if the first condition is false
    if (condition){
        block of code to be executed if the condition is true
    } else if (condition 2) {
        block of code to be executed if the conditional is false and condition2 is true
    } 
    else {
        block of code to be executed if the condition is false
    }
    Ternary Operator is available as well: 
    variable = (condition) ? expressionTrue : expressionFalse;

    switch to specify many alternative blocks of code to be executed based on conditions
    break keyword is used to break out of the switch block
    default code to run if no case match is available
    switch(expression){
        case x:
        code block
        break;
        case y:
        code block
        break;
        default: 
        codeblock
    }
     */
    
    /*
    Loops:

    While Loop loops through a block of code as long as a specified condition is true:

    while(condition){
        code block to be executed
    }
    Example: 
    int i = 0;
    while (i <5){
        cout << i << "\n";
        i++;
    }
    do/while loop is a variant of the while loop. This loop will execute the code block once, before checking if the condition is true, then it will repeat
    the loop as long as the condition is true.
    do {
        code block to be executed
    }
    while (condition);

    For Loop is when you know how many times you want to loop through a block of code, use the for loop instead of a while loop:
    for (statement 1; statement 2; statement 3){
        code block to be executed
    }
    Statement 1 executed once before the execution of the code block.
    Statement 2 defines the condition for executing the code block.
    Statement 3 is executed (every time) after the code block has been executed.
    Think JavaScript, example: 
    for (int i = 0; i < 5; i++){
        cout << i << "\n";
    }

    break and continue are available for loops (works same way as python and JavaScript)
    */

   /* Arrays:
    Arrays are used to store multiple values in a single variable, instead of declaring separate variables for each value
    type name[size];
    exampe:
    string cars[4] = {"Volvo","BMW","Ford","Mazda"}
    int myNumbers[3] = {10, 20,30};

    Accessing arrays:
    name[index];
    Changing Array:
    name[index] = "new item";

    You can ommit the array size but may overwrite it later on, you can ommit writing in all the variables at once if needed
   */

  /* 
  References:
  A reference variable refers to an existing variable is created with the & operator:
  string food = "Pizza";
  string &meal = food; Refers to food
  cout << &food; outputs it's memory address 

  Pointers:
    string* ptr = &food; a pointer variable, with the name ptr, that stores the address of food
  */
    return 0;
    //What the function returns 
};

// Error Handling: 
// try {
//   // Block of code to try
//   throw exception; // Throw an exception when a problem arise
// }
// catch () {
//   // Block of code to handle errors
// }



//Side Notes: 
/*
If you want to work with files you can import the fstream library such as: 
#include <fstream>
Three classes available within it: 
ofstream Creates and writes to files
ifstream Reads from files
fstream a combination of ofstream and ifstream: creates, reads, and writes to files
Ensure when working with files to close them in your program: 
MyFile.close();

Compiling C++ programs requires you to work with four kinds of files: 
Regular Source Code Files. These files contain function definitions and have names that end with .cc (mainly .cpp or .C)
Header Files. These files contain class declarations, function declarations (also known as function prototypes) and various preprocessor statements.
Typically they are just the declarations
They are used to allow source code files to access externally-defined classes and functions. header files end in ".hh" or .h 
Object files. These files are produced as the output of the compiler. They consist of function definitions in binary form, but they are not executable by themselves.
Object files end in .o by convention, although on some operating systems it ends in .obj
Binary Executables. These are produced as the output of a program called a "linker" The linker links together a a number of object files to produce a binary file which can be directly executed.
Binary executables end in .exe
*/