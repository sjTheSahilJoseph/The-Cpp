#include <iostream>

int main(int argc, char const* argv[]) {
    std::cout << "Introduction to Pointers" << std::endl;

    /*

       If we create a variable of any data type, it'll store in memory with a
       specific address. We can create another varialbe of type pointer of that
       same data type to point its address.

       A pointer is a variable which stores the address of another variable of
       the same type.

       The syntax of pointer is:
       data_type* pointer_name = &the_variable;

       // Int pointer:
       int* a = &b;

       * = derefference operator.
       & = Address of operator.


    */

    int variable = 5;
    int* pointer_variable = &variable;
    std::cout << pointer_variable << std::endl;
    // This will print the adress of variable.
    std::cout << *pointer_variable << std::endl;
    // This will derefference the pointer and print the value at that address which this pointer containes.


    /*
     
       WE can have pointer to any datatype. Even custom data type, class, int, float, char, pointer to pointer as pointer is also a variable so it also has its address in memory. etc...

     */

    return 0;
}
