# include <iostream>

int main(int argc, char const* argv[]) {

    // Flow Control.
    // Basically Conditional Programming.
    // Which means we can do different things on the basis of conditions which we set in our code.
    // And those conditions makes a flow.

    // For Example.
    bool red = false;
    bool yellow = false;
    bool green = true;

    // We can make a flow:
    //      If green - Go
    //      If red - Stop
    //      If yellow - slow down

    if (red) {
        std::cout<< "Stop" << std::endl;
    }
    
    if (yellow) {
        std::cout<<"Slow down" << std::endl;
    }

    // If (condition) {statement}.
    // If we have one line then we can ignore {}.
    if (green) 
        std::cout<<"Go" << std::endl;
    
    // Inside if (condition) will be true or false, we can sue logical, relational operators as well.
    
    

    return 0;
}
