#include <iostream>

int main(int argc, const char *argv[]) {

    std::cout<< "While Loop"<<std::endl;

    // While Loop:
    // while (condition) {// Loop Body}

    // We can use while loop in c++ to do repetitive tasks.
    // We can have our Iterator, Starting Point, Text (Condition), Increment (Decrement), Loop Body. In while loop.

    // We can make it work like for loop as well.

    const unsigned int count = 10;
    unsigned int i = 0;
    // We can also use size_t as well.
    while (i < count) {
        std::cout<<i<<std::endl;
        i++;
    }
    // Same as for loop.
    

    // It is better to use while loop when we have to do some stuff on the basis on a condition.
    // and For loop when we have a count to do the thing.
    // But we can use them the way we want.

    return 0;
}
