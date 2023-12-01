#include <iostream>

int main(int argc, char const *argv[]) {
  std::cout << "Introduction to Variables and Data Types" << std::endl;

  // This int is a type of a variable which is Pre-Defined in C++.
  // This is a variable of type int.
  // Which has the value of 5.
  int a = 5;

  // C++ predefines many types data types.
  // For Example:
  //    For Numbers:
  //        int = whole number.
  //        double = fractional numbers.
  //        float = fractional numbers.
  //    For Characters:
  //        char = for character
  //    For Boolean:
  //        bool = true/false.
  //    and much much more.

  int b = 34;
  float c = 3.3;
  double d = 343.343;
  char ch = 's';
  bool isTrue = false;
  // etc

  // We'll learn how computer allocates the memory in Memory Allocation Topic.
  // It is very interesting to know how computer works.

  // Computer uses binary so we use number system.
  // Short Example:

  int number1 = 15;         // Decimal
  int number2 = 017;        // Octal
  int number3 = 0x0f;       // Hexadecimal
  int number4 = 0b00001111; // Binary - C++14

  std::cout << number1 << std::endl;
  std::cout << number2 << std::endl;
  std::cout << number3 << std::endl;
  std::cout << number4 << std::endl;

  // These all will print same 15 but we initialized all of them with different
  // number systems.

  // All data is represented by a bunch of grouped cells of 0's and 1's in
  // memory. As the ranger of your data grows, so will the number of digit you
  // need to represent the data in memory. Hexadecimal system makes it a little
  // easier for humans to handle streams of data with 1's and 0's. Octal has the
  // same goal as Hexadecimal, but it's almost no longer used in modern times.
  // It's just mentioned here for your awareness.
  //

  return 0;
}
