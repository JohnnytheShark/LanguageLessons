// C# is a programming lanaguage developed by MS that runs on the .NET Framework
// C# is used to develop web apps, desktop apps, mobile apps, games and much more
// Requires an IDE to develop it. Use Visual Studio

/*Multiline comments
work the same way as c++ comments */


// Using System means that we can use classes from the System namespace
using System;

//namespace is used to organize your code, and it is a container for classes and other namespaces
namespace HelloWorld{

    class Program{ // class is a container for data and methods, which brings functionality to your program. Every line of code that runs in C# must be inside a class.
        static void Main(string[] args){// Main function to be executed
            Console.WriteLine("Hello World!");// Console is a class that has a writeline function available from the system namespace

            int x = 5, y = 6, z = 50;
            //You can declare a variable the same ways as C++
            /* 
            Variables:
            int stores integers
            long stores whole numbers that are huge
            float stores fractional numbers. Sufficient for storing 6 to 7 decimal digits
            double stores floating point numbers 15 decimal digits
            char stores single characters
            string stores text
            bool stores values with two states: true false
            type variableName = value;

            Type Casting: 
            Implicit Casting (Automatically) - Converting a smaller type to a larger type size
            char -> int -> long -> float -> double
            Explicit Casting (Manually) - Converting a larger type to a smaller size type
            double -> float -> long -> int -> char

            Converting:
            Convert.ToString(variable);
            Convert.ToDouble(variable);
            Convert.ToInt32(variable);
            Convert.ToString(variable);
            */

            //Taking in user input along with showing you how to output it.
            Console.WriteLine("Enter username: ");
            string userName = Console.ReadLine();
            Console.WriteLine("Username is: " + userName);
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

            Math.Max(5,10);
            //C# Math class has many methods that allows you to perform mathematical tasks on numbers.
            // You can do string interpolation as well: You have to use the $ to do it
            string firstName = "John";
            string lastName = "Doe";
            string name = $"My full name is {firstName} {lastName}";
            Console.WriteLine(name);
            //String indexes work the same way as C++ 
            // Strings need to be escaped if quotation marks are used.
            /* 
            Conditional Statements 
            If (){

            } else if (){

            } else {

            }
             Works same way as C++
             Also Switch statement is available as C++  and Ternary Operators are the same

            Loops: 
            While Loops and Do While Loops are available same as C++ or JavaScript
            For loops work the same way as well.

            You have a foreach loop available which is used exclusively to loop through elements in an array: 

            foreach (type variableName in arrayName){
                code block to be executed.
            }
            */
        }
    }
}