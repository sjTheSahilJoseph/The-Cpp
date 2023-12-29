#include <iostream>

int main(int argc, char const* argv[]) {
    std::cout << "Declaration and Initialization of Array" << std::endl;

    // Array are a way to group multple variables of same data type and treat
    // them into a single unit.

    // If we want to refer to a element, then we can do that by index.
    // Index starts from 0.

    // Syntax.
    // name_of_data_type name_of_array = [size_of_array];
    // // Array size is permanent, we cannot change it later. But yes we can
    // copy all the elements into another array inorder to increase the lenght.
    // But we cannot change it's length later on.

    // Declaring an array of int type.
    int scores[10];
    // Now scores have 10 integers.

    // Reading values.
    std::cout << scores[0] << std::endl;
    // We can use [index];
    // 0 = first element.
    std::cout << scores[1] << std::endl;
    // 1 = second.

    // Now they have garbage data which in my case is 0.

    // But when I set the data.
    scores[0] = 3;
    std::cout << scores[0] << std::endl;
    // Now we have 3.
    scores[0] = 2;
    std::cout << scores[0] << std::endl;
    // We can also change its value as well.

    // We can print data outside of array boundry, but that's not what we want
    // and we'll get garbage data.
    // // scores is 10 size but I'm trying to print 11th element, which is
    // outside of the array boundry.
    std::cout << scores[11] << std::endl;
    // We got a garbage data.

    // Declare and Initialize at the same time.
    double salaries[5] = {1.3, 1.3, 1.5, 53.3, 22.32};

    // Traversal of array.
    // using for loop.
    for (size_t i = 0; i < 5; i++) {
        std::cout << salaries[i] << std::endl;
    }

    // we can also leave some elements uninitialized to initlaize later on.
    double uninitialized[5] = {1.3, 1.3, 1.5};
    // The uninitilalized elements will set to 0.

    // We can also make an array with no size speciefied. the compiler will
    // automatically initialize it's size. But when we're done, we cannot resize
    // it.
    int arr2[]{3, 2, 3, 3};
    // But make sure if using [] syntax, initialize (set some values) to it. otherwise compiler error because comiler don't know what's the size is of that array.
    // no "=" because I'm using braced initlization here.

    // Range based For Loop.
    for (auto value : arr2) {
        std::cout << value << std::endl;
    }

    // We can also make array elements constants.
    const int arr_const[] {1,3,4};
    // Now we cannot update their values.

    // Error
    // arr_const[0] = 4;


    // WE can also perform operations on elements offcourse, at the end, they are variables like.

    return 0;
}
