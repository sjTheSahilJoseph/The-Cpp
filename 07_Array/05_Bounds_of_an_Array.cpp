# include <iostream>

int main(int argc, char const* argv[]) {

    std::cout<<"Bounds of an Array"<<std::endl;

    int numbers[] = {1,3,5,7,9,10};

    // Read beyong bounds : Will read garbage or crash your program.
    std::cout<<numbers[12]<<std::endl;

    // Write beyond bounds. The compiler allows it. But you dn't own the memory at index 12, so other program may modify it and your program may read bogus data at a later time. Or you can even corrupt data used by other parts of your program.
    numbers[12] = 1000;
    std::cout<<numbers[12]<<std::endl;
    // C++ allows us. I mean it'll not give error but yes, the linter will give warning in editor.

    return 0;
}
