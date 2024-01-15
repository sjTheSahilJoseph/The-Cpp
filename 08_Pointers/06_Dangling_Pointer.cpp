#include <iostream>

int main(int argc, char const* argv[]) {
    std::cout << "Dangling Pointer" << std::endl;

    /*
        Dangling Pointer.
        A pointer that doesn't point to valid memory address.
        Trying to dereference and use a dangling pointer will result in
       undefined behaviour.

        There are three kinds of dangling pointer.
        1. Uninitialized pointer.
        2. Deleted pointer.
        3. Multiple pointers pointing to same memory.
     */

    // Unitialized Pointer.
    int* uninit_ptr;
    *uninit_ptr = 55;  // CRASH.

    // Deleted Pointer.
    int* deleted_pointer = new int;
    *deleted_pointer = 34;
    delete deleted_pointer;
    *deleted_pointer = 32;  // CRASH.
    // or
    std::cout << *deleted_pointer << std::endl;  // CRASH.

    // Multiple pointers pointing to same memory.
    int* mul_ptr = new int(32);
    int* mul2_ptr = mul_ptr;
    delete mul_ptr;
    std::cout << mul_ptr << *mul_ptr << std::endl;  // Undifined Behaviour.

    /*
        Solutions:
            Initialize Pointers before use.
            Reset Pointers after delete.
            For multiple pointers pointing to same memory address, make sure
       that the owner pointer is very clear.
    */

    return 0;
}
