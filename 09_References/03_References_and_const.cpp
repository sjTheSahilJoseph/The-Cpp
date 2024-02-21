#include <iostream>

int main(int argc, char const* argv[]) {
    std::cout << "Reference and Const" << std::endl;

    /*
        Basically when we change the reference value, the original value also
       changes. Because reference is just the alias of the original value.
    */

    /*
        We can also achive the same thing using pointers with reference.
    */
    // Can achieve the same thing as const reference with pointer : const pointer to const data.
    // Remember that a reference by default is just like a const pointer.
    // All we need to do is make the const pointer point to const data.

    // int age = 5;
    // const int* const const_ptr_to_const_age = &age;
    // *const_ptr_to_const_age = 33; // Error
    
    // No such thing.
    // int age = 55;
    // const int& const weird_reference_age = age;
    // Error.

    // const applies to reference variable name.
    // Not to original variable.

    // Const reference
    std::cout << std::endl;
    std::cout << "Const references : " << std::endl;
    int age = 55;
    const int& const_reference_age = age;

    std::cout << "age : " << age << std::endl;
    std::cout << "const_reference_age : " << const_reference_age << std::endl;

    // Try to modify through const reference
    // const_reference_age = 33;
    // ERROR


    return 0;
}
