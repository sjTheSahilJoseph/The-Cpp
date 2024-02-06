# include <iostream>

int main(int argc, char const* argv[]) {

    std::cout << "Comparing references to Pointers" << std::endl;

    // comparing references to pointers.

    // References.
    // 1. Don't use dereferencing for readind and writing.
    // 2. Can't be changed to reference something else.
    // 3. Must be initialized at declaration.

    // Pointers.
    // 1. Must go through dereference operator to read/write through pointed to value.
    // 2. Can be changed to point somewhere else. (non-const pointer).
    // 3. Can be declared un-initialized (will contain garbage addresses).

    return 0;
}
