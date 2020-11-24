// C# is a programming lanaguage developed by MS that runs on the .NET Framework
// C# is used to develop web apps, desktop apps, mobile apps, games and much more
// Requires an IDE to develop it. Use Visual Studio

/*Multiline comments
work the same way as c++ comments */


// Using System means that we can use classes from the System namespace
using System;
using System.Linq;
//System.Linq offers more methods for arrays

class Car {
    public string color = "red"; //field or attribute the word public here is a attribute that can only be accessed by objects.
    // Public keyword is an access modifier, which specifies that the color variable/field of car is accessible for other classes as well, such as Program.
    //Uppercase the first letter when naming classes. Also it is common that the name of the C# file and the class matches, as it makes our code organized.
    //However it is not required (like in Java)
    public void fullThrottle(){ // method
        Console.WriteLine("I go really fast and I am red");
    }
    string type; //fields can be left blank as well
    //Files are typically split out into there own separate class files.

    //Constructor is a special method that is used to initalize objects. It runs when an object of a class is created. It can be used to set initial values for fields.
    public Car(string modelName)
    {
        model = "Mustang"; Set the initial value for model
        //model = modelName; a constructor can also take in parameters to construct the object
        // Constructors have to match the class name, and it cannot have a return type (like void or int)
        //All classes have constructors by default: if you don't create a class constructor yourself, C# creates one for you. However, then you are not able to set initial values for fields.
    }

}





//namespace is used to organize your code, and it is a container for classes and other namespaces
namespace HelloWorld{

    class Program{ // class is a container for data and methods, which brings functionality to your program. Every line of code that runs in C# must be inside a class.
        static void Main(string[] args){// Main function to be executed
            Console.WriteLine("Hello World!");// Console is a class that has a writeline function available from the system namespace
            SayHi();
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

            // Creating an object 
            Car myobj = new Car();
            Console.WriteLine(myObj.color);

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

            Breaks and Continues are the same as C++ and Python.
            */
            /* Arrays
            string[] cars;
            cars[0] = "car2"; //Changing the element at index 0 to car2
            cars.Length //(can be used to distinguish how many elements are in an array)
            Array.Sort(array name); used to sort an array
            
            Different MEthods of Creating Arrays: 
            Create an array of four elements, and add values later
            string[] cars = new string[4];

            Create an array of four elements and add values right away 
            string[] cars = new string[4] {"Volvo", "BMW", "Ford", "Mazda"};

            Create an array of four elements without specifying the size 
            string[] cars = new string[] {"Volvo", "BMW", "Ford", "Mazda"};

            Create an array of four elements, omitting the new keyword, and without specifying the size
            string[] cars = {"Volvo", "BMW", "Ford", "Mazda"}
            
             */
        }

        static void SayHi(){ //Static (means that the method belongs to the Program class and not an object of the Program class) void (type of return or no return) Name (Capitalized Usually) Parameters inside of ()
            Console.writeline('Hello You');
        }

        // static void MyMethod(string country="Norway") is a default parameter example

        // if you want a method to return something use: static int MyMethod(int x) describing what you want to return and what you are arguing in

        //Method overloading can happen, multiple methods can have the same name with different parameters. Just overload one method.
    }
}

/* Access Modifiers 
public The code is accessible for all classes
private The code is only accessible within the same class
protected The code is accessible within the same class, or in a class that is inherited from that class.
internal The code is only accessible within its own assembly, not from another assembly.

Also combinations exist: 
protected internal
private protected

 */

//Properties are used to change private fields to something else
class Person { 
    private string name; //field

    public string Name // property
    {
        get { return name;}
        set { name = value;}
    }
}
// Inheritance works as follow: 
/*
class Something
{
    public string brand = "something"

}

class Nothing: Something // derived class (child)
{

}

If you don't want other classes to inheirt from a class use the word sealed: 
sealed class Something

Polymorphism: 
to override the base class method add the virtual keyword to the method inside the base class, and by using the override keyword for each derived class methods:
virual void would go into the base class

then public override void function is what overrides the function in the base class

*/