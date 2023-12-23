#include <iostream>

int main(int argc, char const* argv[]) {
    // If Statement.
    // If is used when we have to do things conditionally.
    // For Example:
    int n1 = 5;
    int n2 = 6;
    bool result = (n1 < n2);  // Expression yielding the condition.
    std::cout << std::boolalpha << "result : " << result << std::endl;
    std::cout << std::endl;

    // We can use if (result) { as well
    if (result == true) {
        std::cout<<n1 << "is less than " << n2 << std::endl;
    }

    // if (!result) {
    if (!result == true) {
        std::cout<<n1 << "is not less than " << n2 << std::endl;
    }

    // We can also pass the condition as well.
    if (n1 < n2) {
        std::cout<< "Direct Contition pass" << std::endl;
    }

    // If the condition inside if (condition) is not true, then it'll not execute the if {} body.


    return 0;
}
