# include <iostream>

int main(int argc, char const *argv[]) {

    std::cout << "Memory Leaks" << std::endl;

    // Memory Leaks.
    // When we loose access to memory that is dynamically allocated.
    // Basically we loose the pointer that was pointing to that dynamically allocated memory.

    // For Example:
    // Reassignment of stack address to active dynamic address pointer.
    // Pointes to some address, let's call that address1.
    int *ptr = new int {53};

    // Should delete and reset here.

    // lives at address2.
    int number {32};

    // Now ptr points to address2, but address1 is still in use by our program.
    // But our program has lost access to that memory location.
    // Momory has been leaked.
    ptr = &number;


    // For Example2:
    // Double Allocation.
    int *ptr2 {new int{53}};

    // Use the pointer.
    
    // Should delete and reset here.

    // Memory with int{53} leaked.
    ptr2 = new int {32};



    // For Example3:
    // Pointer in local scope.
    {
        int *ptr3 = new int {32};
    }
    // Memory with int {32} leaded.
    // We lost the access of memory.



    return 0;
}
