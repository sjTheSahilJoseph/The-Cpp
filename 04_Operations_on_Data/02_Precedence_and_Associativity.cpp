#include <iostream>

int main(int argc, char const* argv[]) {
    std::cout << "Precedence and Associativity" << std::endl;

    // What does that mean by Precedence and Associativity?
    // It means that what to do when we have to perform multiple operations in the same expression.
    // For Example:
    //  a + b * c - d / e - f + g
    //      Not which operation should perform first then second then third.
    //  We can manually tell that by using this concept that what to do first and how.

    // In C++ Multiplication and Division have to do done before we do addition and subtraction.
    // Now what if we have to do addition and subtraction?
    // We solve that problem with associativity.
    // Associativity defines that If we do the operations from the left or from the right.

    // Precedence: Which action to do first.
    // Associativity: Which direction or which order.


    int a = 1;
    int b = 2;
    int c = 3;
    int d = 4;
    int e = 5;
    int f = 6;
    int g = 7;
    int result = a + b * c - d / e - f + g;
    std::cout << "The result is : " << result << std::endl;
    // We got 8 as answer.
    // But how?
    // The associativity table says that:
    //  The division and multiplication have to be first before addition and subtraction.
    //  We are going to take b and c and multiply those. = 6;
    //  Then we divide d divide by e. = 0;
    //  After that we are going to do addition and subtraction.
    //  We take a and add that into the result of b and c. = a(1) + b*c(6) = 7;
    //  Then we minus the result of d and e; d/e(0) - 7 = 7;
    //  Then we minus f and plug g. = 7 - 6 = 1 + 7 = 8;
    //  We got our 8.
    // We go from left to right for addition because our associativity table says that for addition and subtraction, the associativity is left to right.
    // So we'll start from the left.
    // This is how it works. For each operation the associativity is different.

/*

+------------+---------------------------------------------+-----------------------------+---------------------+
| Precedence | Operator                                    | Description                 | Associativity       |
+------------+---------------------------------------------+-----------------------------+---------------------+
| 1          | ++ --                                       | Suffix/postfix increment   | Left-to-right       |
|            |                                             | and decrement               |                     |
|            | ()                                          | Function call               |                     |
|            | []                                          | Array subscripting          |                     |
|            | .                                           | Structure and union member  |                     |
|            |                                             | access                      |                     |
|            | ->                                          | Structure and union member  |                     |
|            |                                             | access through pointer      |                     |
|            | (type){list}                                | Compound literal (C99)      |                     |
+------------+---------------------------------------------+-----------------------------+---------------------+
| 2          | ++ --                                       | Prefix increment and        | Right-to-left       |
|            |                                             | decrement [note 1]           |                     |
|            | + -                                         | Unary plus and minus        |                     |
|            | ! ~                                         | Logical NOT and bitwise NOT |                     |
|            | (type)                                      | Cast                        |                     |
|            | *                                           | Indirection (dereference)   |                     |
|            | &                                           | Address-of                  |                     |
|            | sizeof                                      | Size-of [note 2]            |                     |
|            | _Alignof                                    | Alignment requirement (C11) |                     |
+------------+---------------------------------------------+-----------------------------+---------------------+
| 3          | * / %                                       | Multiplication, division,   | Left-to-right       |
|            |                                             | and remainder               |                     |
+------------+---------------------------------------------+-----------------------------+---------------------+
| 4          | + -                                         | Addition and subtraction    |                     |
+------------+---------------------------------------------+-----------------------------+---------------------+
| 5          | << >>                                       | Bitwise left shift and      |                     |
|            |                                             | right shift                 |                     |
+------------+---------------------------------------------+-----------------------------+---------------------+
| 6          | < <=                                        | For relational operators <  |                     |
|            |                                             | and ≤ respectively          |                     |
|            | > >=                                        | For relational operators >  |                     |
|            |                                             | and ≥ respectively          |                     |
+------------+---------------------------------------------+-----------------------------+---------------------+
| 7          | == !=                                       | For relational = and ≠      |                     |
|            |                                             | respectively                 |                     |
+------------+---------------------------------------------+-----------------------------+---------------------+
| 8          | &                                           | Bitwise AND                 |                     |
+------------+---------------------------------------------+-----------------------------+---------------------+
| 9          | ^                                           | Bitwise XOR (exclusive or)  |                     |
+------------+---------------------------------------------+-----------------------------+---------------------+
| 10         | |                                           | Bitwise OR (inclusive or)   |                     |
+------------+---------------------------------------------+-----------------------------+---------------------+
| 11         | &&                                          | Logical AND                 |                     |
+------------+---------------------------------------------+-----------------------------+---------------------+
| 12         | ||                                          | Logical OR                  |                     |
+------------+---------------------------------------------+-----------------------------+---------------------+
| 13         | ?:                                          | Ternary conditional [note 3]| Right-to-left       |
+------------+---------------------------------------------+-----------------------------+---------------------+
| 14         | =                                           | Simple assignment           |                     |
|            | += -=                                       | Assignment by sum and        |                     |
|            |                                             | difference                  |                     |
|            | *= /= %=                                    | Assignment by product,       |                     |
|            |                                             | quotient, and remainder     |                     |
|            | <<= >>=                                     | Assignment by bitwise left  |                     |
|            |                                             | shift and right shift       |                     |
|            | &= ^= |=                                    | Assignment by bitwise AND,  |                     |
|            |                                             | XOR, and OR                 |                     |
+------------+---------------------------------------------+-----------------------------+---------------------+
| 15         | ,                                           | Comma                       | Left-to-right       |
+------------+---------------------------------------------+-----------------------------+---------------------+

*/

// But what if we have to make a clear instruction that which operation should perform first.
// We can do that by using () around our expressions.
// If we use () around the expression then this will do the thing inside the () first then move to the next.
// Same after that.
// For Example:
    result = (a + b) * c - d / e - f + g;
    std::cout << "The result() is : " << result << std::endl;
    // Now it says 10. Why? Because now it did the addition first. Then move on.

    result = (a + b) * c - d / e - (f + g);
    std::cout << "The result() is : " << result << std::endl;
    // Now it says -4. Why? Because now it did both () first then move on.

    // We can use this as per our needs and wants.
    // The compiler will do the () thing first, then do the rest according to the operator precedence and associativity table.

    // It is better to make the intent in our code as clear as possible by clearly using () to indicate which operation we want done first.

    return 0;
}
