#include <ios>
# include <iostream>

int main(int argc, char const* argv[]) {

    std::cout << "Booleans" << std::endl;

    // Booleans are the Data Types in C++ which have 2 states.
    // True or False.
    
    // For Example:
    bool red_light = true;
    bool green_light = false;

    // if (red_light == true) { // One way of using if block.
    if (red_light) { // We can also use variable itself.
        std::cout<< "Stop!" << std::endl;
    } else {
        std::cout << "Go through!" << std::endl;
    }
    
    // Printing out a bool
    // 1 -> true
    // 0 -> false
    std::cout<<std::endl;
    std::cout<<"red_light : " << red_light << std::endl;
    std::cout<<"green_light : " << green_light << std::endl;

    // Printing out true and false.
    std::cout<<std::endl;
    std::cout<<std::boolalpha;
    std::cout<<"red_light : " << red_light << std::endl;
    std::cout<<"green_light : " << green_light << std::endl;

    // Booleans take 8 bits in Memory.
    std::cout<<sizeof(bool)<<std::endl;
    // A byte can store 256 different values.
    // Using a it just to cover two states (true/false) is wasteful, especially for devices with hard memory constraints (think embedded devices).
    // There are techniques to pack even more data into a byte. We'll learn more about these in a few upcoming chapters.

    return 0;
}
