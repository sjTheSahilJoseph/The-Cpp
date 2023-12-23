# include <iostream>

int main(int argc, char const* argv[]) {
    std::cout << "Compound Operators" << std::endl;

    // Compound Assignment Operators.
    // These are operators that allows us to do an arithmetic operation and assign the result to a value in one line.

    // Variable.
    int variable = 1;
    
    // Initial Value.
    std::cout << "Initial Value : " << variable << std::endl;

    // Let's use Compound Assignment Operator.
    variable += 10;
    // Equivalent to value = value + 10;
    std::cout << "Value : " << variable << std::endl;

    variable -= 10;
    // Equivalent to value = value - 10;
    std::cout << "Value : " << variable << std::endl;

    variable *= 10;
    // Equivalent to value = value * 10;
    std::cout << "Value : " << variable << std::endl;

    variable /= 10;
    // Equivalent to value = value / 10;
    std::cout << "Value : " << variable << std::endl;

    variable %= 10;
    // Equivalent to value = value % 10;
    std::cout << "Value : " << variable << std::endl;

    // And yes, After we perform that action, on each arithmetic action the variable value is changed.
    // The reason is = operator. Which is actually changing the original value.
    // If we wanna just print value+10 then we can do by (std::cout<<value*5;).
    // This will not change the original value but only print for that line.

    return 0;
}
