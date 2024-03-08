# include <iostream>

int main(int argc, char const* arv[]) {

    std::cout<<"Character Manipulation and Strings"<<std::endl;

    // Check if character is alphanumeric
    std::cout<<std::endl;
    std::cout<<"std::inslnum : "<<std::endl;

    std::cout<< "C is alphanumeric : " << std::isalnum('C') << std::endl;
    std::cout<< "^ is alphanumeric : " << std::isalnum('^') << std::endl;

    // Can use this as a test condition
    char input_char {'*'};
    if (std::isalnum(input_char)) {
        std::cout<< input_char << " is alphanumeric." << std::endl;
    } else {
        std::cout<< input_char << " is not alphanumeric." << std::endl;
    }
    
    // Check if character is alphabetic
    std::cout<<std::endl;
    std::cout<<"std::isalpha : "<<std::endl;

    std::cout<< "C is alphabetic : " << std::isalpha('C') << std::endl;
    std::cout<< "^ is alphabetic : " << std::isalpha('^') << std::endl;

    return 0;
}
