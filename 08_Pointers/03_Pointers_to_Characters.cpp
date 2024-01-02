#include <iostream>

int main(int argc, char const* argv[]) {
    std::cout << "Pointer to Character" << ::std::endl;

    // Simpe Character Pointer.
    char a = 'a';
    char* ptr_a = &a;
    std::cout<<*ptr_a<<std::endl;
    // We got the value, simple.

    // But we can do something special with character pointers.
    // That is:
    //  We can initialize with a string literal : C-String.
    char* p_msg {"Hi, How're you?"};
    // Complain.
    // const char* p_msg {"Hi, How're you?"};
    // No complain
    std::cout<< "p_msg value " << p_msg<<std::endl;
    // We get the value.
    // // If we just print it, the compiler will convert that into const character array, so we got the whole string.
    // But... Actually, this pointer is pointing to only its first character.
    std::cout<< "*p_msg value " << *p_msg<<std::endl;
    // We got only H
    // THe first character of that character array, is pointed to p_msg.
    // This p_msg's value is basically a character array.
    // and p_msg is pointing to the first element "H" of that character array.
    // // Some compilers don't compile this code, because this is like cost char array, and if we try to change const it is not good. So that's why, compilers may give error to not to compile this code.
    // // For telling the compiler that this is not const char pointer, we need to specify it.

    // IF we tell that yes, this is a const char array, then no compiler will complain.
    const char* m = "jdkafjdkalf";
    // Now worries.


    // When working with strings, use character array, because then we can chnage the value.
    char msg[] {"msg"};
    msg[1] = 'S';
    std::cout<<msg<<std::endl;
    // It changed. and no problem at all.

    return 0;
}
