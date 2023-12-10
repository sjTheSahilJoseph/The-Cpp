#include <iomanip>
# include <iostream>

int main(int argc, char const *argv[]) {
    std::cout<<"Fractional Numbers"<<std::endl;

    // Keep in mind that any data which we work with will be stored as binary in the memory.
    // Fractional Numbers are also be called floating point numbers.

    // There are some types of Floating Point Types in C++.
    // In technical terms, they used to represent numbers with fractional parts in C++.
    // We have 3 types of floating point numbers / fractional numbers that we can use.
    //  1. Float
    //      size = 4
    //      precision = 7
    //  2. Double
    //      size = 8
    //      precision = 15
    //  3. long double
    //      size = 12
    //      precision = > double
    
    //  What is precision?
    //      Precision is something like the number which we can represent in bits like "10" has 2 precision, 1.22 has 3 precision. etc..

    // Let's try out:
    // Declare and initialize the variables
    float number1 = 1.12345678901234567890f;
    double number2 = 1.12345678901234567890;
    long double number3 = 1.12345678901234567890L;

    // Print out the sizes
    std::cout<< "size of float : " << sizeof(float)<<std::endl;
    std::cout<< "size of double : " << sizeof(double)<<std::endl;
    std::cout<< "size of long double : " << sizeof(long double)<<std::endl;

    // Print the values just for seeing
    // It will only print out like 1.123456 end.
    // In order to view more precision we need to tell that to the stream.
    std::cout<<number1<<std::endl;
    std::cout<<number2<<std::endl;
    std::cout<<number3<<std::endl;

    // Print the values just for seeing
    // It will print on the basis of precision.
    // In order to view more precision we need to tell that to the stream.
    std::cout<<std::setprecision(20); // We've set up the precision to 20. It means now it will show more.
    std::cout<<number1<<std::endl;
    std::cout<<number2<<std::endl;
    std::cout<<number3<<std::endl;

    // If we are storing more than the variable can have precision and use other kind of variable declarations like functional:
    //  float functional_method_float (1342342334); // It will act differently.
    // And also If we use braced initialization:
    //  float floatNumber {34242424243}; // It will act differently.
    // And also If we use this syntax:
    //  float fl = 5334324324324; // It'll act differently.
    // Act differently means some may show error, if we declare a variable with more than its limit.

    // Another cool thing is that we can use scientific notations while declaring a floating point varible.
    double number_s_1 {12342343243};
    double number_s_2 {1.343423e8}; // e8 means multiply by 10 to the power 8.
    double number_s_3 {0.00000000034343}; // again there are some scientific notatons.
    double number_s_4 {3.493e-11}; // e-11 means this will multiply by 10 to the power minus 11.

    // Don't forget that no matter which type of data, it will represent as 0 1 in memory.
    // For floting point numbers, we don't use the number system as we do for integers.
    // But for floating point numbers, we have a special system.

    // There are few thing which we can do with floating point numbers which we can't do with integers.
    // For Example:
    //  1. We can divide floating point number with 0.
    //      And then we get Infinity.
    //      If the number is positive, we get potivie infinity.
    //      If the number is negative, we get negative infinity.
    //  2. We can take 2 floating point numbes which are 0s (0.0 / 0.0).
    //      And then we get NaN (Not a Number).

    // Let's try this out.
    double number10 {5.6};
    double number11{};// initialized to 0.
    double number12 {}; // initialized to 0.
    
    // Infinity
    double result { number10 / number11};

    std::cout<<number10<<"/"<<number11<<"yields"<<result<<std::endl;
    std::cout<<result<<"+"<<number10<<"yields"<<result + number10<<std::endl;
    
    // NaN
    result = number11 / number12;

    std::cout<<number11<<"/"<<number12<<"="<<result<<std::endl;

    // NOTE:
    //  Make sure to add suffix when initlization a floating point number.
    float n1 {1.3434240f}; // f means float.
    double n2 {1.23432432424234}; // we dont' need to put anything because by default it is a double.
    long double n3 {1.2342432430L}; // L means long double.



    return 0;
}
