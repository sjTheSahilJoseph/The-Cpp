# include <iostream>

int main(int argc, char const* argv[]) {

    std::cout<<"Assignments"<<std::endl;

    // Declare and Initlalize
    int variable_1 = 1;
    std::cout<<variable_1<<std::endl;

    int variable_2; // 0 Value.
    std::cout<<variable_2<<std::endl;
    variable_2 = 2; // Assign Value.
    std::cout<<variable_2<<std::endl;
    variable_2 = 5; // Re-Assign Value.
    std::cout<<variable_2<<std::endl;

    // Careful about auto assignments
    auto variable_3 = 123u; // Declare and initialize with type deduction.
    variable_3 = -2; // Assign negative number. DANGER!
    std::cout<<variable_3<<std::endl; // Some unwanted value.

    return 0;
}
