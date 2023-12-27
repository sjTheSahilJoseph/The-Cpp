# include <iostream>

int main(int argc, char const* argv[]) {

    // Break = Gets out of the loop.
    // Continue = Skip the current iteration and tries for the next.
    // We can use them in any loop.

    for (size_t i = 0; i < 10; i++) {
        if (i == 5)
            break;
        if (i == 3)
            continue;
        std::cout<<i<<std::endl;
    } // The output = 0, 1, 2, 4.
      // On 3, it skipped, on 5, it gets out of the loop.

    return 0;
}
