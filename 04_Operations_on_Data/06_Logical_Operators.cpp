#include <ios>
#include <iostream>

int main(int argc, char const* argv[]) {
    // Logical Operators.
    // There are total 3 types of Logical Operators in C++.
    // 1. AND &&
    //  AND operator works like this:
    //      If both values are false it'll return false.
    //      If both values are true it'll return true.
    //      If one is false and one is true, it'll return false.
    //      Because in AND both should be true in order to be true.
    //      If any of these operands (The values) is false, it'll be false.
    // 2. OR ||
    //  OR operator works like this:
    //      If both values are false, It'll return false.
    //      If both values are true, It'll return true.
    //      If one is false and one is true, It'll return true.
    //      Because in OR at least one should be true in order to be true.
    //      If any of these operands (The values) is true, it'll be true.
    // 3. NOR !
    //  NOR operator works like this:
    //      If the value is true, it'll return false.
    //      If the value is false, it'll return true.

    bool aa = true;
    bool bb = false;
    bool cc = true;

    std::cout << std::boolalpha;
    std::cout << "aa : " << aa << std::endl;
    std::cout << "bb : " << bb << std::endl;
    std::cout << "cc : " << cc << std::endl;

    // AND &&;
    std::cout << "aa && bb = " << (aa && bb) << std::endl;
    std::cout << "aa && cc = " << (aa && cc) << std::endl;
    std::cout << "aa && bb && cc = " << (aa && bb && cc) << std::endl;
    // OR ||;
    std::cout << "aa || bb = " << (aa || bb) << std::endl;
    std::cout << "aa || cc = " << (aa || cc) << std::endl;
    std::cout << "aa || bb && cc = " << (aa || bb || cc) << std::endl;
    // NOR !;
    std::cout << "!aa && bb = " << (!aa && bb) << std::endl;
    std::cout << "!aa && cc = " << (!aa && cc) << std::endl;
    std::cout << "!aa && bb && cc = " << (!aa && bb && cc) << std::endl;

    // NOTE: Use () according to the execution flow.
    // And also as per operator precedence and associativity.

    // We can combine these with boolean values, relational operators etc...

    int n1 = 3;
    int n2 = 2;
    int n3 = 5;
    std::cout << std::endl;
    std::cout << ((n1 > n2) || (n2 < n3)) << std::endl;
    std::cout << ((n1 > n2) && (n2 < n3)) << std::endl;
    std::cout << (!(n1 > n2) && (n2 < n3) || (n1 == n2)) << std::endl;
    // etc.. like that.

    return 0;
}
