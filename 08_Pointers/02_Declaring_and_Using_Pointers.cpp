#include <iostream>

int main(int argc, char const* argv[]) {
    std::cout << "Declaring and Using Pointers" << std::endl;

    // Declaring Pointer
    // int* ptr;
    // It can only store an address of a variable of type int.

    // If we try to print null pointer.
    // // We get segmentation fault (core dumped).
    // std::cout << ptr << *ptr << std::endl;

    // Explicitely initialize to nullptr.
    // int* ptr_nullptr = nullptr;

    // If we try to print null pointer initialized with nullptr;
    // // WE get same, segmentation fault (core dumped).
    // std::cout << ptr_nullptr << *ptr_nullptr << std::endl;

    // We can only store addresses into pointer.
    // Let's check if we can store a value of not.
    // int* pt = 5;
    // We got an error. We cannot store the value directly into pointer
    // variable. std::cout<<pt<<std::endl;

    // NOTE:
    // All Pointer variables have same size, because it stores the same thing,
    // which is address.

    // int* ptr_int = nullptr;
    // float* ptr_float = nullptr;
    // char* ptr_char = nullptr;
    // std::cout<<sizeof(ptr_int)<<std::endl;
    // std::cout<<sizeof(ptr_float)<<std::endl;
    // std::cout<<sizeof(ptr_char)<<std::endl;
    // They all have same size.
    // I've tested size of 3 with nullptr.
    // NOTE: We cannot use nullptr but in sizeof() we can.

    // But if we assign them real address.
    // Their size would be same.
    int a = 5;
    float b = 3.2;
    char c = 's';
    int* ptr_int = &a;
    float* ptr_float = &b;
    char* ptr_char = &c;
    std::cout << sizeof(ptr_int) << std::endl;
    std::cout << sizeof(ptr_float) << std::endl;
    std::cout << sizeof(ptr_char) << std::endl;

    // Important:
    // Their position of * doesn't matter. But I preffer on left as type.
    // int* ptr = &var;
    //
    // If we initialize it like this:
    int *ptr{}, ptr2{};
    // Now, ptr is pointer, but ptr2 isn't;
    // ptr2 is regular int variable.

    // We can also change values of pointer's address variable.
    int pv = 53;
    int* p = &pv;
    std::cout << "Before value change " << p << std::endl;
    pv = 52;
    std::cout << "After value change " << p << std::endl;
    // Same address value if the value is changed,
    // We can also change the pointer to address new thing.
    int aaa = 5;
    std::cout << "Before value change " << p << std::endl;
    p = &aaa;
    std::cout << "After value change " << p << std::endl;
    // Not its changed, the address it containes has been changed.

    // This will automatically points to null.
    // But = initialization not do that. We have to do it manually.
    int* braced_initialized_pointer{};

    // NOTE:
    // Derefferencing is reading something through a pointer.
    int ddd = 32;
    int* ptr_ddd = &ddd;
    std::cout<<"address : "<<ptr_ddd<<std::endl;
    std::cout<<"value : "<<*ptr_ddd<<std::endl;

    // Value at Address of Operator *(&ptr);
    // It is used to derefference by value at address.
    int abc = 32;
    int* p_abc = &abc;
    std::cout<<"value at address of : " <<*(&abc)<<std::endl;
    // It means, value at the address of abc variable.

    return 0;
}
