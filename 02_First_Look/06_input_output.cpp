# include <iostream>
# include <string>

int main(int argc, char const *argv[]) {

    // Input = taking something in.
    // Output = giving something out.

    // For output something form out code, we use cout.
    // Notice the << symbol, It is called Insertion operator, which tells that the "data" is inserting as input to cout to give output.
    std::cout<<"data"<<std::endl;

    // There are more like cout in iostream file.
    int variable;
    // cin is used to take input. That's why extraction operator is used. >>.
    std::cin>>variable;

    // We can use chaining.
    std::cout<<"S"<<"J"<<std::endl;

    // We cannot add space in input if we use cin>>variable;
    // To solve this, we have to use a function getline().
    {

        std::string fullName;
        std::getline(std::cin, fullName);
        std::cout<<"Full Name : "<<fullName<<std::endl;

    }

    return 0;
}