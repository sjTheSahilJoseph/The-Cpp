# include <iostream>
# include <limits>

int main(int argc, char const* argv[]) {

    // Numeric Limits.
    // We can see by <limits> library.

    std::cout<< "Range of short : " << std::numeric_limits<short>::min() << " - " << std::numeric_limits<short>::max() << " - " << std::numeric_limits<short>::lowest() << std::endl;
    std::cout<< "Range of unsigned short : " << std::numeric_limits<unsigned short>::min() << " - " << std::numeric_limits<unsigned short>::max() << " - " << std::numeric_limits<unsigned short>::lowest() << std::endl;
    std::cout<< "Range of signed short : " << std::numeric_limits<signed short>::min() << " - " << std::numeric_limits<signed short>::max() << " - " << std::numeric_limits<signed short>::lowest() << std::endl;
    // Same for other types.

    return 0;
}
