#include <iostream>

int main(int argc, char const* argv[]) {
    std::cout << "New Fails" << std::endl;

    // In some rare cases, the 'new' operator will fail to allocate dynamic memory from the heap.
    // When that happens, and you have no mechanism in place to handle that failure, an exception will be thrown and your program will crash.

    // For example:
    // Unhandles new failure crash.
    // int* ints = new int[103234234234342432];

    // Loop to try and exhaust the memory capabilites of my system.
    // The program will forcefully terminate.
    // for (size_t i = 0; i < 32414231432142; ++i) {
    //
    //     int* ints2 = new int[32423432];
    // }
// New Fails
// terminate called after throwing an instance of 'std::bad_alloc'
//   what():  std::bad_alloc
// Aborted (core dumped)

    // We can fix that by 2 primary ways.
    // 1. Through the exception mechanism.
    // 2. The std::nothrow setting.

    // Exception Mechanism.

    // for (size_t i = 0; i < 32414231432142; ++i) {
    //     try {
    //     int* ints2 = new int[32423432];
    //     } catch (std::exception& ex) {
    //
    //         std::cout<< "Exception "<< ex.what()<<std::endl;
    //     }
    // }

    // In C++, We wrap the code which can give erros in try catch block.
    // This will try to do some stuff, if not then it'll go in catch block and execute catch block.

    // Or we can use std::nothrow as well.
    // int* ints = new (std::nothrow) int[34243];
    // It'll just return the null pointer if it fails.
    

    return 0;
}
