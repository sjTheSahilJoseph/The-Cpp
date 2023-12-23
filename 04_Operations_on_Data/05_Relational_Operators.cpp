#include <iostream>

int main(int argc, char const* argv[]) {
    std::cout << "Relational Operators" << std::endl;

/*

What are Relational Operators?
    They are used to compare stuff basically.
    They return basically boolean values.

*/

int n1 = 5;
int n2 = 5;

// This is smaller than relational operator.
// It'll return 0 because that's not true. They are the same.
std::cout<<"n1 < n2 : " << (n1 < n2) << std::endl;
// This is greater than relational operator.
// It'll return 0 because that's not true. They are the same.
std::cout<<"n1 > n2 : " << (n1 > n2) << std::endl;

// This is smaller than equals to relational operator.
// It'll return 1 because it'll loop up for 2 things, if the value is <> or ==. They are the same so it'll return 1 as true.
std::cout<<"n1 <= n2 : " << (n1 <= n2) << std::endl;
// This is greater than equals to relational operator.
// It'll return 1 because it'll loop up for 2 things, if the value is <> or ==. They are the same so it'll return 1 as true.
std::cout<<"n1 >= n2 : " << (n1 >= n2) << std::endl;

// This is equals to equals to relational operator.
// It'll return 1 because. They are the same so it'll return 1 as true.
std::cout<<"n1 == n2 : " << (n1 == n2) << std::endl;
// This is not equals to relational operator.
// It'll return 0 because. They are the same so it'll return 0 as false.
std::cout<<"n1 != n2 : " << (n1 != n2) << std::endl;

// If we wanna use "true" / "false" instead of "0" then we can tell cout by.
// std::cout<<std::boolalpha;

// NOTE: Comparing Expression should be in () because of compiler error.
// Because if we don't use () then compiler will evaluate << operator first because of the operator precedence and associativity.

// We can also store the result of boolean into a bool variable.

bool result = n1 == n2;
// Now here we don't need to use () as there is no << operator present so no associativity and operator precedence will cause any error.
std::cout << "result is : " << result << std::endl;
// now result have 1 as result. We can use anywhere in our program.

    return 0;
}
