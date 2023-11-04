// This line is telling that include the built in library into the program.
// # include is a preprocessor keyword which will do the task (include the file) before compiling.
// <filename> it is the syntax to name the file that we want to include to our program.
// Each file has its own function and features.
// iostream is the file which helps us to print things to the terminal/console.
# include <iostream>

int main(int argc, char const *argv[]) {
    
    // The cout and endl both coming from iostream file which we included at the very start of this file.
    // If we remove the line where we are including the iostream file, this program will not work. Because it don't know what is cout which is used in this file.
    std::cout<<"SJ"<<std::endl;

    // This program is used to print SJ to the terminal.

    return 0;
}