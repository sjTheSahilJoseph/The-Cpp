# include <iostream>

int main(int argc, char const* arg[]) {
    
    std::cout<<"Characters and Text"<<std::endl;

    // Characters are just characters.
    char character1 = 's'; // We declare a character variable with char datatype and we use single quotes.
    char character2 = 'j';
    // char char_with_double_quotes = "s"; // Error

    std::cout<<character1<<std::endl;
    std::cout<<character2<<std::endl;

    // Character takes 1 bit of memory.
    std::cout<<sizeof(char)<<std::endl;

    // Basically each character have ascii value. So charactet uses it.
    // We can't use language other than english most of the time.
    // ASCII was amont the first encodings to represent text in a computer.
    // There are better ways to represent text that is meant to be seen in different languages, one of the most common being Unicode.
    // Just know that it's a robust way to represent text in different langauges for a computer.

    // With ASCII
    char character_a = 65; // 65 = ASCII value of A;
    std::cout<<character_a<<std::endl;

    // If we typecast into int.
    std::cout<<static_cast<int>(character_a)<<std::endl;

    return 0;
}
