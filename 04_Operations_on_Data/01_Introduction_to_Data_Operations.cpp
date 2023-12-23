#include <iostream>

int main(int argc, char const* argv[]) {
    // We can perform data operations to the data.
    // For Example, We can do addition operation between two variables etc...

    // The data
    int number_1 = 5;
    int number_2 = 5;

    // Addition.
    int sum = number_1 + number_2;
    std::cout<< "The sum of " << number_1 << " and " << number_2 << " is " << sum << std::endl;

    // Subtraction.
    int sub = number_1 - number_2;
    std::cout<< "The sub of " << number_1 << " and " << number_2 << " is " << sub << std::endl;

    // Divide.
    int div = number_1 / number_2;
    std::cout<< "The div of " << number_1 << " and " << number_2 << " is " << div << std::endl;

    // Multiplication.
    int mul = number_1 * number_2;
    std::cout<< "The mul of " << number_1 << " and " << number_2 << " is " << mul << std::endl;

    // Division in C++ is quite tricky.
    // Because int data type can only store int. Not fractional values.
    // In order to use fractional values, we need to use Double, Float data types.
    
    // For Example
    int d1 = 31;
    int d2 = 10;
    std::cout<<"The division of " << d1 << " and " << d2 << " is " << (d1 / d2) << std::endl;
    // The result is 3. Because it tries that how many times we can adjust 10 in 31. and that's 3.

    // But if we use float.
    float f1 = 31;
    float f2 = 10;
    std::cout<<"The division of " << d1 << " and " << d2 << " is " << (f1 / f2) << std::endl;
    // Not it showed 3.1. As it is a float data type variable.

    // If we wanna know what remains after we do division.
    // We use % modulus operator.
    int m1 = 31;
    int m2 = 10;
    std::cout<<"The modulus of " << m1 << " and " << m2 << " is " << (m1 % m2) << std::endl;

    /*
        There are some important things to understand.
        1. Make sure to use right data type for doing valid operations of that data type.
    */



    return 0;
}
