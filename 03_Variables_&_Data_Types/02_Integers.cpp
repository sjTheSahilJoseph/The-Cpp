#include <iostream>

int main(int argc, char const *argv[]) {
  // Integers.
  // Integers are represented by int keyword in c++.

  // Integers stores whole numbers.
  // Typically occupies 4 bytes or more in memory.

  // Variable may contain random garbage value. WARNING
  int elephant_count;

  int lion_count{};   // Initializes to zero.
  int dog_count{10};  // Initializes to 10.
  int cat_count = 15; // Also same work but syntax different.
  int domesticated_animals{dog_count +
                           cat_count}; // Can use expression as initilizer.

  int bad_initialization{
      doesnt_exist1 + doesnt_exist2}; // error - won't compile, the expression
                                      // in the braces uses undeclared variables

  int narrowing_conversion = 2.9; // 2.9 is of type double, with a wider range
                                  // than int. // ERROR or WArning.

  // Another way to initialize a variable.
  int apple_count(5); // Functional Variable Initiazer;

  int narrowing_conversions_functional(
      2.9); // Basically it will type cast it into by cutting decimal value. so
            // the value will be 2. this is called implicit casting by the way.

  int assignmentInitlization = 5; // This way of initilization variables is
                                  // called assignment initiliztion.

  // We can check the size of a type in memory.
  std::cout << "size of int : " << sizeof(int)
            << std::endl; // We can pass the data type explicitily. or pass the
                          // variable name.
  std::cout << "size of int : " << sizeof(apple_count)
            << std::endl; // We can pass the data type explicitily. or pass the
                          // variable name.

  return 0;
}
