# include <iostream>

int main(int argc, char const **argv) {

    std::cout << "Null Pointer Safety." << std::endl;

    // Making sure you're working with pointers containing valid memory addresses.
    // Basically before using that pointer, we have to check that if it contains a valid memory address of not.
    // If it is null pointer, we can't use it. Because it doesn't make any sense in this context.

    // We can have a check for null pointer.

    // Initializing to nullptr.
    int *ptr1 {};

    // Check if the pointer is null or not.
    if (!(ptr1 == nullptr)) {
        std::cout << "Valid Address" << std::endl;
    } else {
        std::cout << "InValid Address" << std::endl;
    }

    // we can also directly check by name. As if works on boolean stuff.
    if (ptr1) {
        std::cout << "Valid Address" << std::endl;
    } else {
        std::cout << "InValid Address" << std::endl;
    }

    // We can delete on a pointer containing nullptr.
    // It isn't a rule that we can't do anything by nullpointer before check if its null or not.

    // Calling a delete on a nullptr is ok.
    int* ptr2 {};
    // This won't cause any problem if ptr2 contains nullptr.
    delete ptr2;

    // So no need to averdo something like.
    // But no problem.
    if (ptr2) {
        delete ptr2;
        ptr2 = nullptr;
    }


    return 0;
}
