
#include <iostream>

int main(int argc, const char *argv[]) {

    std::cout<< "Do while loop"<<std::endl;

    // There is a slight difference between while and do while loop.
    // While loop first checks the condition then executes the loop body.
    // But do while loop executes the bosy at least once and then checks for the condition. If the condition is true, it'll repeat, if not, it'll get out of loop.

    size_t i = 0;
    unsigned int count = 10;
    do {
        std::cout<<"Inside Do While Loop Body" << i<<std::endl;
        i++;
    } while (i < count); // semicolon is must here.




    return 0;
}
