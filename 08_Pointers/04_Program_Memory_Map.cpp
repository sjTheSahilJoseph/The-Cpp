#include <iostream>

int main(int argc, char const* argv[]) {
    char intro[] = "Program Memory Map";
    std::cout << intro << std::endl;

    // When we write our c++ code in Code Editor.
    // It is just a .cpp file.
    // But when we compile the c++ file or files.
    // We have a executable.
    // When we execute that executable file, our program from hard disk, go to the Random Access Memory.
    // And in RAM there is a specific area called "Program Area".
    // Where our program loaded.
    
    // Lot's of programs running on our OS. We can quickly run out of memory.

    // That's why the idea of "Virtual Memory" is born.
    // Virtual Memory is like a trick that fools your program inot thinking it is the only program running on your OS, and all memory resources belong to it.
    // Each program is abstracted into a process, and each process has access to the memory range 0 ~ 2^N -1 where N is 32 on 32 bit systems and 64 on 64 bit systems.

    // We have Real Memory (RAM).
    // WE have Virtual Memory (2^N -1).
    
    // So when we executable, the executable go from virtual memory to our CPU's Memory Management Unit.
    // That MMU transforms the map of virtual memory and real memory of each process.
    
    // Memory Management Unit.
    // The entire program is not loaded in real memory by the CPU and MMU. Only parts that are about to be executed are loaded. Making effective use of real memory, a valuable and lacking resource.


    // The memory map is a standard format defined by the OS. All programs written for that OS must conform to it. It is usually divided into some sections.

    // The memory map.
    // 1. System.
    // 2. Stack.
    // 3. Heap.
    // 4. Data.
    // 5. Text.

    // Stack.
    // Stack is what is going to stre our local variables.

    // Heap.
    // Additional memory thta can be quiried for at run time.

    return 0;
}
