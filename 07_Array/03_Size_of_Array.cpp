#include <iostream>

int main(int argc, char const* argv[]) {
    std::cout << "Size of Array" << std::endl;

    // Size of Array.
    // We can query the size of an array by std::size(array_name).
    // In Runtime.

    // Declaring and Initializing an array of type int.
    int arr[] = {1, 2, 3, 4, 5};

    // C++ 17 way.
    for (size_t i = 0; i < std::size(arr); i++) {
        std::cout << arr[i] << std::endl;
    }

    // Before C++ 17 way.
    for (size_t i = 0; i < (sizeof(arr) / sizeof(arr[0])); i++) {
        std::cout << arr[i] << std::endl;
    }  // Personal Favourite.

    return 0;
}
