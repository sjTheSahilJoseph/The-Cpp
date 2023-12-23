#include <iostream>

// We'll use these 2 header files for formatting the output.
#include <iomanip>
#include <ios>

int main(int argc, char const* argv[]) {
    // There are a lot of methods, functions, in these libraries to manipulate
    // the output.

    // Adding a new line:
    // We can use \n to add a new line.
    // But we can use std::endl; to add a new line. Both work same in this
    // context.

    // Without new line the output = Line1Line2
    std::cout << "Line1";
    std::cout << "Line2";
    // With /n the output = Line1
    //                      Line2
    std::cout << "Line1\n";
    std::cout << "Line2\n";
    // With std::endl the output = Line1
    //                      Line2
    std::cout << "Line1" << std::endl;
    std::cout << "Line2" << std::endl;

    // std::flush
    // Causes immediate sending of data to the device connected to the stream.
    // Usually when we use std::cout alone, the data first do to a temporary
    // buffer first, then go to the terminal. But if we wanna send data directly
    // to the terminal then std::flush is used.

    // std::setw()
    // to format the table data stuff.
    std::cout << "Unformatted table : " << std::endl;
    std::cout << "SJ"
              << " "
              << "Black"
              << " 10 " << std::endl;
    std::cout << "SJSJSJSJS"
              << " "
              << "Bla"
              << " 10dfa " << std::endl;
    std::cout << "SJafdksafj"
              << " "
              << "Blacksfafds"
              << " 10 " << std::endl;
    std::cout << "SJ"
              << " "
              << "Black"
              << " 10 " << std::endl;

    std::cout << "formatted table : " << std::endl;
    std::cout << std::setw(10) << "SJ"
              << " " << std::setw(10) << "Black" << std::setw(10) << " 10 "
              << std::endl;
    std::cout << std::setw(10) << "SJSJSJSJS"
              << " " << std::setw(10) << "Bla" << std::setw(10) << " 10dfa "
              << std::endl;
    std::cout << "SJafdksafj"
              << " " << std::setw(10) << "Blacksfafds"
              << " 10 " << std::endl;
    std::cout << "SJ"
              << " " << std::setw(10) << "Black"
              << " 10 " << std::endl;
    // We can set width accordingly. That was only for showing.
    
    // We can also justify.
    // std::right;
    // We can use internal justified of more things as well. (negative number) stuff.
    // We can also use setfill('-') to fill in white space area as well.
    // std::boolalpha; // to show bools into true, false instead of 0/1.
    // std::noboolalpha; // opposite.
    // std::showpos; // shows positive + also.
    // std::dec, hex, oct // to show in other formats. (only for non-floating numbers, otherwise no error but won't work).
    // std::scientific, std::fixed // for floating numbers formatting.

    return 0;
}
