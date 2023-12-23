#include <iostream>
# include <string>

int main(int argc, char const* argv[]) {
    // Switch Statement.
    // Switch statement is used to control flow of the program on the basis of
    // conditions. But here it's more likely with values.

    // For Example:
    const int a = 5;
    // const is making variable constant, we cannot change it's value then.

    switch (a) {
        case 5: {
            std::cout << "0" << std::endl;
        }; // even if the condition is true, it'll run and if no break is present, then it'll execute next case.
        case 1: {
            std::cout << "1" << std::endl;
        } break ; // but if in next case, the break is present, it'll stop.
        default:
            std::cout << "default" << std::endl;
            std::cout<< "second line in default, to see {} behaviour has nothing to do with lines numbers." <<std::endl;
            // no {}, but works fine in this context.
    }
    // Important thing is to add break in case clauses, because, otherwise it'll
    // not terminate the switch flow. We want that after the condition is met,
    // do the thing and then get out of the switch. We have default clause which
    // runs when no case is matched. We can use {} or not, it totally depends.

    // We can also group switch.

    switch (a) {
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
            std::cout<<"yes"<<std::endl;
            break;
        default:
            std::cout<<"default"<<std::endl;
    } // works perfectly.

    // NOTE:
    // We can use Integral Types and enums: int, long, unsigned short, etc..
    // As condition.
    std::string name = "SJ";
    // switch (name) {
        // ERROR
    // } // This will cause an error.


    return 0;
}
