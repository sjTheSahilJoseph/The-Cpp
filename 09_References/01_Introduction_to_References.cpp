# include <iostream>

int main(int argc, char const* argv[]) {

    std::cout << "References." << std::endl;

    // A reference is basically an alias variable that we can use to reference an original variable.

    // Declaring and using references.
    int value = 55;
    // We use '&' in order to declare a refernence variable.
    // We have to declare and initialize in one statement.
    // int& refrence_value; // error.
    int& refrence_value = value;
    std::cout << value << std::endl;
    std::cout << refrence_value << std::endl;
    std::cout << sizeof(value) << std::endl;
    std::cout << sizeof(refrence_value) << std::endl;
    std::cout << &value << std::endl;
    std::cout << &refrence_value << std::endl;
    // Same address.

    // Basically its just a alias for the actual variable.
    // No major difference.

    // Modify the data using reference.
    refrence_value = 53;
    std::cout << value << std::endl;
    std::cout << refrence_value << std::endl;
    // Changed.

    // Basically when we pass reference to a let's say function,
    // whatever we do with the reference in that function will take place
    // in real variable.

    // Reference -> Reference at memory context.

    return 0;
}
