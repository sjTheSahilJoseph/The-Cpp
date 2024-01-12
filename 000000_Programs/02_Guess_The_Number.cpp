#include <iostream>

bool RUNNING = true;

void print_choices() {
    std::cout << std::endl;
    std::cout << "\t*******************************" << std::endl;
    std::cout << std::endl;
    std::cout << "\tFor Quit: press '0'" << std::endl;
    std::cout << "\tFor starting the game: press '1'" << std::endl;
    std::cout << std::endl;
    std::cout << "\t*******************************" << std::endl;
    std::cout << std::endl;
    std::cout << "\tEnter the choice and press enter: ";
}

int generate_random_number(int min, int max) {
    int random_number = 5;
    return random_number;
}

int check_if_user_guessed_or_not(int random_number, int guessed_number,
                                 int* tries) {
    if (random_number == guessed_number) {
        return 1;
    } else if (random_number < guessed_number) {
        tries++;
        return 2;
    } else if (random_number > guessed_number) {
        tries++;
        return 3;
    } else {
        std::cout << "Something went wrong, please try again" << std::endl;
        return 0;
    }
}
int get_number_from_user() {
    int guess_number;
    std::cout << std::endl;
    std::cout << "\t*******************************" << std::endl;
    std::cout << std::endl;
    std::cout << "\tEnter the number and press Enter: " << std::endl;
    std::cin>>guess_number;
    return guess_number;
}

void game() {
    int choice;
    int tries = 1;
    int guessed_number;
    print_choices();
    std::cin >> choice;
    std::cout << std::endl;

    if (choice == 0) {
        RUNNING = false;
        return;
    } else if (choice == 1) {
        guessed_number = get_number_from_user();
        int random_number = generate_random_number(0, 100);
        int result =
            check_if_user_guessed_or_not(random_number, guessed_number, &tries);
        std::cout << result;
    }
}

int main(int main, char const* argv[]) {
    std::cout << std::endl;
    std::cout << "\t***** Guess The Number *****" << std::endl;
    std::cout << std::endl;

    do {
        game();
    } while (RUNNING);

    return 0;
}
