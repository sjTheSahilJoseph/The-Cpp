#include <iostream>

int main(int argc, char const* argv[]) {
    std::cout << "For Loop" << std::endl << std::endl;

    // For Loop Structure;
    for (unsigned int i{}; i < 10; ++i) {
        std::cout << "Inside For Loop" << i << std::endl;
    }

    // Pillars of any loop.
    // Iterator.
    // Starting Point.
    // Test (Controls when the loop will stop).
    // Increment (Decrement).
    // Loop Body.

    // Iterator.
    // Iterator is a variable which we use to navigate in the loop.
    // In for loop we set in first expression:
    // for (unsigned int i = 0; ...) {}
    // unsigned means only positive values, i is the name of variable, 0 to
    // start the index from 0.

    // Starting Point.
    // In for loop, we set our unsigned int i variable to 0 and that's the
    // starting point.

    // Test.
    // In for loop, we check if the index is matched with the condition or not.
    // If yes then it'll stop, if not, it'll execute the loop body. for
    // (unsigned int i = 0; i < 10; ...) {} Now if the i is less than 10 it'll
    // stop, otherwise it'll execute loop body {}. NOTE: i index starts from 0;

    // Increment.
    // This is the thing which we use to move our iterator (increment).
    // In for loop:
    // for (unsigned int i = 0; i < 10; i++) {}
    // We can use ++i or i++. ++1 will first increment the value then use the
    // updated value. i++ will first use the current value then increment for
    // next.

    // If we don't increment the iterator,
    // For loop will become infinite loop.

    // Loop Body.
    // {} inside curly braces, we have body of our loop.
    // Anything there will execute.

    // For Loop Execution.
    for (unsigned int i{}; i < 10; i++) {
    }
    // 1. First a variable of unsigned int named i will be initialized to value
    // 0.
    //      This statement will only executes once in a for loop.
    // 2. Then, It'll do to 2nd expression (i<10). It'll check if that it true
    // or false.
    //      If it's false, then it'll not run the loop body. It if's true, it'll
    //      go inside the loop body.
    // 3. If it's true, and it'll go inside loop body. Then it'll execute loop
    // body.
    // 4. After executing loop body once, it'll go to 3rd expression (i++).
    //      Here the iterator increments to + 1.
    // 5. Now the iterator value is 1.
    // 6. Then it'll again checks if 2nd expression is true or not. Which is
    // true in that case. Then do the thing until it's false. If it's false.
    // It'll get out of loop. And execute next line/block/statement to the for
    // loop.

    // NOTE:
    // We can use size_t as well as iterator data type.
    // We can start the iterator from anywhere we want.
    // We can do anything with these.

    // Experiments on For Loop.
    // for (size_t i = 0;;) {
    // std::cout<<"size_t i = 0;;)" << i <<std::endl;
    // }
    // Infinite Loop.
    // i = 0 all the time, because we are not incrementing.

    // In my system, size_t is unsigned long.
    // for (size_t i = 0;;i++) {
    //     std::cout<<i<<std::endl;
    // }
    // For loop with no condition.
    // Also a Infinite for loop but at this time, the i is updating.

    // for (;;) {
    //     std::cout<< ";;;" << std::endl;
    // }
    // ;;; = error.
    // ;; no error.
    // But infinite loop with no iterator, no condition, no incrementation.

    // If we have one statement, then we can ignore {}.
    for (size_t i = 0; i < 10; i++) std::cout << "{}less" << std::endl;

    // i is only available in {} due to scope.
    // If we want to use the global iterator, we can also do that. No problem at
    // all.

    // // Global Iterator Version.
    unsigned int global_iterator = 0;
    for (global_iterator; global_iterator < 10; ++global_iterator)
        std::cout << "inside " << global_iterator << std::endl; // inside 9
    std::cout << "outside " << global_iterator << std::endl; // outside 10
                                                            // Because of the condition.
                                                            // Index starts from 0. and 0 - 9 = 10; but i = 10 = false.

    // NOTE: We can do multiple things by using for loop.


   // Range based Foor Loop.
    int arr2[]{3, 2, 3, 3};
    // no "=" because I'm using braced initlization here.

    // Range based For Loop.
    // // We can also use range based for loop in C++. Like this.
    for (auto value : arr2) {
        // It'll update the "value" on each iteration of element of array.
        std::cout << value << std::endl;
    }

    return 0;
}
