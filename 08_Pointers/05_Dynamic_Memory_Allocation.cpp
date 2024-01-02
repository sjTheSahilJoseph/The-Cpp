#include <iostream>

int main(int argc, char const* argv[]) {
    std::cout << "Dynamic Memory Allocation" << std::endl;

    // Dynamic Memory Allocation is basically using Heap.
    // We can dynamically allocate memory at runtime with it.

    // Null Pointer:
    //  Null Pointer is a pointer which is pointing to null.
    // int* ptr = 0; //is null pointer. 0 = null;
    // or int* ptr = nullptr; also a null pointer.

    // Bad Practice of Pointer.
    // Don't just wirte a value by derefference (junk).
    // int* ptr;
    // *ptr = 53; // Bad Practice.
    // std::cout<<*ptr<<std::endl;
    // We got segmentation fault.

    // Stack and Heap.
    // Stack:
    //  1. Memory is finite.
    //  2. The developer isn't in full control of the memory lifetime.
    //  3. Lifetime is controlled by the scope mechanism.
    // Heap:
    //  1. Memory is finite.
    //  2. The developer is in full control of when memory is allocated and when
    //  it's released.
    //  3. Lifetime is controlled explicitily through new and delete operators.

    // Scope
    {
        // We declare and initialized a variable in stack.
        int a = 53;
        std::cout << a << std::endl;
        // Print a.
        // By the time our scope ends, this variable is not longer anymore.
    }

    // To use Heap Memory,
    // We need to setup a pointer which is pointing to the allocated memory in
    // heap. Dynamically memory at runtime and make a pointer point to it.
    int* ptr = nullptr;
    ptr = new int;
    // Dynamically allocated memory for 1 int in the heap.
    // This memory belogs to our program form now.
    // No other program or system cannot use ti for anything else.
    // After this line, now it is a valid memroy address.
    // The size of the allocated memory will be such that it can store the type
    // pointed to by the pointer.

    // Writing into the dynamically allocated memory.
    *ptr = 32;
    std::cout << *ptr << std::endl;
    // Prints the value.

    // If we use heap memory, our memory is will not released on the basis on
    // scope.

    // Releasing the memory.

    int* ptr2 = nullptr;
    ptr2 = new int;
    // do the stuff with it.
    // then release it by.
    delete ptr2;
    // and make ptr2 to null.
    ptr2 = nullptr;

    // NOTE: Don't delete twice on a pointer. because bad things can happen, As
    // it is not our program's allocated ddresss.

    // Once memory is released, we can re-use the same pointer to allocate new memory.
    ptr2 = new (int);
    // do stuff again.
    // // Then release the memory.
    delete ptr2;
    // and point to null.
    ptr2 = nullptr;
    return 0;
}
