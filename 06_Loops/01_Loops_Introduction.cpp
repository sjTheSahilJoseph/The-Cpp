#include <iostream>

int main(int argc, char const* argv[]) {
    std::cout << "Loops Introduction" << std::endl;

    // Loops are used to do repetitive tasks.

    // For Example:
    std::cout << "Manually" << std::endl;
    std::cout << "SJ" << std::endl;
    std::cout << "SJ" << std::endl;
    std::cout << "SJ" << std::endl;
    std::cout << "SJ" << std::endl;
    std::cout << "SJ" << std::endl;

    // If we use for loop.
    std::cout << "For Loop" << std::endl;
    for (int i = 0; i < 5; i++) {
        std::cout << "SJ" << std::endl;
    }

    // We can do the same thing with while loop.
    // Each loop has its own use case.
    int a = 0;
    std::cout<< "While Loop" <<std::endl;
    while (a < 5) {
        std::cout << "SJ" << std::endl;
        a++; // Increment Postfix Operator
    }
    
    // We can do the same thing with do while loop.
    // Each loop has its own use case.
    int d = 0;
    std::cout<< "Do While Loop" <<std::endl;
    do {
        std::cout << "SJ" << std::endl;
        d++; // Increment Postfix Operator
    } while (d < 5);

    // We'll loop up at different loops in detail.

    return 0;
}
