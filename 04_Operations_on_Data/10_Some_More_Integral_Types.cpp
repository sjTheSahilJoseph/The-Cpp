# include <iostream>

int main(int argc, char const* argv[]) {

    // Integral types less than 4 bytes in size don't support arithmetic operations.
    short int a = 5;
    short int b = 3;
    auto c =  a + b;
    // But compiler is smart enough so when we try to do arithmetical operations on those, it'll convert their types to int.
    std::cout<<c<<std::endl;
    std::cout<<sizeof(c)<<std::endl;
    // Same behaviour is present on other operators like bitwise shift operators (<< and >>).

    return 0;
}
