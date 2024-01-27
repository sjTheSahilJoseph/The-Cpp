# include <iostream>

int main(int argc, char const* argv[]) {

    std::cout << "Dynamic Arrays" << std::endl;

    // Dynamic Arrays.
    // These are the arrays that we can allocate on the heap and they are not going to be stored on the stack.

    // Arrays allocated on the heap with the new operator.
    // Can also use the std::nothrow version of new.
    
    // Array Dynamic Allocation.
    // We had to make sure that the array size is const when we use stack arrays.
    // But when dynamic arrays, we can use without const variable.
    const size_t a = 5;
    int arr[a];
    // But again that's only for the variable.
    size_t size = 10;

    // Different ways you can declare an array.
    // Dynamically and how they are initialized.
    
    // ptr1 array will contain garbage values.
    double* ptr1 = new double[size];

    // All values initialized to 0.
    // because of {}.
    int* ptr2 = new (std::nothrow) int[size] {};

    // Allocating memory space for an array of size double variables.
    // First 5 will be initialized with the values given, and the rest will be 0's.
    double* ptr3 = new(std::nothrow) double[size] {1,3,5,33,2};

    // Check and use the allocated array.
    std::cout<<"ptr1"<<std::endl;
    if (ptr1) {

        // Print out elements. Can use regular array access notation or pointer arithmetic.
        for (size_t i{}; i < size; i++) {
            std::cout << "value : " << ptr1[i] << " : " << *(ptr1 + i) << std::endl;
        }

    }

    // Check and use the allocated array.
    std::cout<<"ptr2"<<std::endl;
    if (ptr2) {

        // Print out elements. Can use regular array access notation or pointer arithmetic.
        for (size_t i{}; i < size; i++) {
            std::cout << "value : " << ptr2[i] << " : " << *(ptr2 + i) << std::endl;
        }

    }

    // Check and use the allocated array.
    std::cout<<"ptr3"<<std::endl;
    if (ptr3) {

        // Print out elements. Can use regular array access notation or pointer arithmetic.
        for (size_t i{}; i < size; i++) {
            std::cout << "value : " << ptr3[i] << " : " << *(ptr3 + i) << std::endl;
        }

    }


    // Releasing memory [array version].
    delete[] ptr1;
    ptr1 = nullptr;
    delete[] ptr2;
    ptr2 = nullptr;
    delete[] ptr3;
    ptr3 = nullptr;

    // Pointers and arrays are different.
    // Pointers initialized with dynamic arrays are different from arrays.
    // std::size doesn't work on them, and they don't support range based for loops.

    int* ptr4 = new int[10] {1,2,3,4,5,6,7,8,9,10};

    // Error.
    // std::cout << "std::size(ptr4) : " << std::size(ptr4) << std::endl;

    // Error.
    // ptr4 doesn't have array properties that are needed for the range based for loop to work.
    // for (int temp : ptr4) {
    //     std::cout<<temp<<std::endl;
    // }


    // Static Arrays Vs Dynamic Arrays.
    // Static arrays are what we allocate on stack.
    // Dynamic Arrays are what we allocate on heap.



    return 0;
}
