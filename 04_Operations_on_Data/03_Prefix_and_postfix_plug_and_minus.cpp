#include <iostream>

int main(int argc, char const* argv[]) {

    std::cout << "Prefix and Postfix + and -." << std::endl;

    // Increment 1 to a variable by a+1 method.
    int a = 1;
    std::cout << "The value of a is " << a << std::endl;
    // Now it is showing 1.
    a = a + 1; // Increment 1 to the old value of a.
    std::cout << "The value of a is " << a << std::endl;
    // Now it is showing 2.

    // Decrement 1 to a variable by a+1 method.
    int b = 1;
    std::cout << "The value of b is " << b << std::endl;
    // Now it is showing 1.
    b = b - 1; // Decrementing 1 to the old value of b.
    std::cout << "The value of b is " << b << std::endl;
    // Now it is showing 0.

    // We can do the same thing with other operators as well.
    int c = 1;
    std::cout << "The value of c is " << c << std::endl;
    c = c * 1;
    std::cout << "The value of c is " << c << std::endl;

    int d = 1;
    std::cout << "The value of d is " << d << std::endl;
    d = d / 1;
    std::cout << "The value of d is " << d << std::endl;

    // But in C++ we have prefix and postfix method where we can combine with increment and decrement operator ++ --.
    int e = 1;

        e++; // It is same as (e = e+1).
             // NOTE: Now e is updated.
        std::cout << "The value of e is " << e << std::endl; // 2

        // The interesting thing is.
        e++; // It is same as (e = e+1). // Now the value is 3.
        std::cout << "The value of e is " << e << std::endl; // 3

        // But if I do incrementation here.
        std::cout << "The value of e is " << e++ << std::endl; // 3
        // Why?
        // Because it only grabbed the value of e which is 3 at this moment. But next time when we use e it is 4. // (Postfix).
        std::cout << "<<e++<< " << e << std::endl;
        // Now the value is 4.

        // value++ = Postfix Increment.
        // ++value = Prefix Increment.
        
        // If we use Prefix Increment.
        int f = 1;
        ++f; // Now the value is incremented by 1 = 2.
        std::cout<<"Prefix " << f << std::endl;
        // But in this case:
        std::cout<<"++Prefix " << ++f << std::endl;
        // The value increment first then print. // Prefix Increment.
        // std::cout<<f; // And yes, No matter we increment inside cout, But the value is incremented.

        // We can do the same things with decrement (--).

        // We cannot do other operations like this.
        // value** = Not correct in that context, it is a pointer stuff.
        // **value = Not correct in that context, also pointer stuff.
        // value// = not correct, it is a comment way.
        // //value = not correct, it is a comment way.

        // They only increment or decrement by one.

    return 0;
}
