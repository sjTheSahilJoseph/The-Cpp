#include <iostream>

int main(int argc, char const* argv[]) {
    std::cout << "If Else" << std::endl;

    // If else works like a ladder.
    // If if condition is not true, then it'll look up else, and we can also
    // combine else if.

    if (true) {
        std::cout << "if" << std::endl;
    } else {
        std::cout << "else" << std::endl;
    }

    if (false) {
        std::cout << "if" << std::endl;
    } else if (true) {
        std::cout << "else" << std::endl;
    }

    // We can also nest our conditions.

    if (true) {
        // do something or / and.
        if (true) {
            // then check for this.
        }
    } else {
        // do something.
    }
    // we can do as much as we want.

    // We can use logical operators for checking multiple conditions.

    if (true && !true) {
        // do something.
    } else {
        // else do this.
    }

    // NOTE: in condition () use == not = because it'll not give error but it'll always return true as it is assignment operator.
    return 0;
}
