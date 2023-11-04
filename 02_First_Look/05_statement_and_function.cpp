# include <iostream>

int main(int argc, char const *argv[]) {

    // Statement.
        // A Statement is a basic unit of computation in a C++ Program.
        // Every C++ program is a collection of statements organized in a certain way to achieve some goals.
        // Statements end with a semicolon in C++ (;).
        // For Example:
            int a = 5; // Statement to initialize a variable named a and assign the value of 5. (Ended with ;).
            std::cout<<a<<std::endl; // Statement to print the value of a to the terminal. (Ended with ;).
        // Statements runs in an order.
        // Execution keeps going until there is a statement causing the program to terminate, or run another sequence of statements.
    
    // Function.
        // Function are the way to make a re-usable block of code which do something and if needs it will take some things, and if needed it returns some value.
        // Function Syntax in C++:
            // return_type functionName(parameter_type parameter_name) {
            //     // do somethings
            //     return value;
            // }
        // A function must be defined before it's use.
        // We'll discuss functions in depth later.

    return 0;
}
