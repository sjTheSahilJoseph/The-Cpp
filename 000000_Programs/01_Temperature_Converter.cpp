#include <iostream>

double celcius_to_farenheit(double celcius) {
  double farenheit = (celcius * 9 / 5) + 32;
  return farenheit;
}

double farenheit_to_celcius(double farenheit) {
  double celcius = (farenheit - 32) * 5 / 9;
  return celcius;
}

int main(int argc, char const* argv[]) {
  while (1) {
    double value = 0;
    char operation = 'b';

    std::cout << "To Quit press 'q' | For Celcius to Farenheit 'a' | For "
                 "Farenheit to Celcius 'b' | For Both 'c' : ";
    std::cin >> operation;

    std::cout << std::endl;

    if (operation == 'q') {
      break;
    }

    std::cout << "Enter the Value : ";
    std::cin >> value;

    std::cout << std::endl;

    if (operation == 'a') {
      std::cout << "The Farenheit = " << celcius_to_farenheit(value)
                << std::endl;
    } else if (operation == 'b') {
      std::cout << "The Celcius = " << farenheit_to_celcius(value) << std::endl;
    } else if (operation == 'c') {
      std::cout << "The Celcius = " << farenheit_to_celcius(value) << std::endl;
      std::cout << "The Farenheit = " << celcius_to_farenheit(value)
                << std::endl;
    } else {
      std::cout << "Not a Valid Option" << std::endl;
      continue;
    }

    std::cout << std::endl;
  }
  return 0;
}
