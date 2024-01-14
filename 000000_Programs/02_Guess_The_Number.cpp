#include <iostream>

bool RUNNING = true;

/**
 * @brief prints the choices.
 */
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

/**
 * @brief generates a random number on the basis of min and max.
 *
 * @param min
 * @param max
 * @return
 */
int generate_random_number(int min, int max) {
    if (min > max) {
        return -1;
    }
    int random_number = rand() % (max - min + 1) + min;

    return random_number;
}

/**
 * @brief checks if user guessed or not, if not then return different values.
 *
 * @param random_number
 * @param guessed_number
 * @return
 */
int check_if_user_guessed_or_not(int random_number, int guessed_number) {
    if (random_number == guessed_number) {
        return 1;
    } else if (random_number < guessed_number) {
        return 2;
    } else if (random_number > guessed_number) {
        return 3;
    } else {
        std::cout << "Something went wrong, please try again" << std::endl;
        return 0;
    }
}
/**
 * @brief gets the number from user.
 *
 * @return guess_number.
 */
int get_number_from_user() {
    int guess_number;
    std::cout << std::endl;
    std::cout << "\t*******************************" << std::endl;
    std::cout << std::endl;
    std::cout << "\tEnter the number and press Enter: ";
    std::cin >> guess_number;
    std::cout << std::endl;
    return guess_number;
}

int main(int main, char const* argv[]) {
    std::cout << std::endl;
    std::cout << "\t***** Guess The Number *****" << std::endl;
    std::cout << std::endl;

    int choice;
    print_choices();
    std::cin >> choice;

    int random_number = generate_random_number(1, 100);
    int tries = 0;
    do {
        int guessed_number;
        std::cout << std::endl;
        if (choice == 0) {
            RUNNING = false;
        } else if (choice == 1) {
            guessed_number = get_number_from_user();
            int result =
                check_if_user_guessed_or_not(random_number, guessed_number);
            if (result == 1) {
                tries++;
                std::cout << "\t^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^" << std::endl;
                if (tries == 1) {
                    std::cout << "\tAMAZING! YOU GUESSED IT IN " << tries
                              << "st TRY." << std::endl;
                } else {
                    std::cout << "\tWOW! YOU GUESSED IT IN " << tries
                              << " TRIES." << std::endl;
                }
                std::cout << "\t^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^" << std::endl;
                break;
            } else if (result == 2) {
                std::cout << "\tPlease choose a small number." << std::endl;
                tries++;
                continue;
            } else if (result == 3) {
                std::cout << "\tPlease choose a large number." << std::endl;
                tries++;
                continue;
            } else {
                std::cout << "Something went wrong, please try again."
                          << std::endl;
                break;
            }
        }
    } while (RUNNING);
    return 0;
}
