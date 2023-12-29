#include <iostream>

int main(int argc, char const* argv[]) {
    std::cout << "Array of Characters" << std::endl;

    // Declare Array of Characters.
    char name[5] = {'s', 'a', 'h', 'i', 'l'};
    // We can only use single quotes '' not "" for characters..

    // Print out the array through looping.
    std::cout<<"name : ";
    for (auto character : name) {
        std::cout<<character;
    }
    std::cout<<std::endl;

    // size of array.
    std::cout<<"Size of array is : " << sizeof(name)<<std::endl;
    // We got 5.

    // We can also print char array directly without using loops.
    std::cout<<name<<std::endl;
    // But sometimes it may print garbage value. So we should use c-strings in order to print char array directly.

    // C string.
    char nick_name[3] = {'s', 'j', '\0'};
    // this is called "null termination character".
    // It is used to tell that array is finished.
    // The array size should be +1 for null termination character.
    // As we learnt before. If we don't initialize all elements of an array. It'll be 0.
    // So that's why, when we don't add a null termination character.
    // Which means null terminations as well.
    // // We also dont' need to have size for null termination character in that case. It'll automaticaly apply to it.
    std::cout<<nick_name<<std::endl;

    // NOTE: If we don't put null termiation character, then it'll print garbage.


    // Can also define a literal C String.
    std::cout<<std::endl;
    char msg[] = {"Hi There"};
    // Null Termination character automatically applied here.
    std::cout<<msg<<std::endl;
    std::cout<<sizeof(msg)<<std::endl;
    // We got 9, 8 for the characters. and 9th for null terminator character.
    // // Spaces are also a character.

    // NOTE: WE can print directly character arrays but we can't do that with other data type arrays.
    // If we do, we don't get a compiler error but we have a garbage value.

    return 0;
}
