#include <iostream>

int main(int argc, char const* argv[]) {
    // Ternary Operators.
    // Ternary is basically shorthand of conditions.

    // Structure:
    //  result = (condition) ? option1 : option2;
    //      // If Else Version:
    //          if (condition) {
    //              result = option1;
    //              } else {
    //              result = option2;
    //              }

    // NOTE: option1, and option2 must be of same data type.

    // For Example;
    int a = 5;
    int b = 5;
    int c = a > b ? 0 : 1; // c will be 1.
                           // We can wrap out code into () for operator precedence and associativity stuff.
    std::cout<<c<<std::endl;

    return 0;
}
