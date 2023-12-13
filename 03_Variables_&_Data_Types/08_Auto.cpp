# include <iostream>

int main(int argc, char const* argv[]) {

    std::cout<<"Auto Keyword in C++"<<std::endl;

    // Auto = Let the compiler deduce the type.

    auto a = 1; // Auto will give this variable of type int in compile time.
    auto b = 1.1; // Double
    auto c = 14.0f; // Float
    auto d = 'd'; // Char
    
    // Int modifier suffixes;
    auto e = 123u; // Unsigned int
    auto f = 123ul; // Unsigned long
    auto g = 123ll; // long long

    return 0;
}
