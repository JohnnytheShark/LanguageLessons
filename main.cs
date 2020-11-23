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
        }
    }
}