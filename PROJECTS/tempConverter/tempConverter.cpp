#include <iostream>

int main() {

    double temp;
    char unit;

    std::cout << "-----------------------------TEMP CONVERTER-----------------------------\n";
    std::cout << "F = Farenheit\n";
    std::cout << "C = Celsius\n";
    std::cout << "What unit would you like to conver to?: ";
    std::cin >> unit;

    if(unit == 'F' || unit == 'f') {
        std::cout << "Enter the temp in Celsius to convert: ";
        std::cin >> temp;

        temp = (1.8 * temp) + 32.0;
        std::cout << "Temp is: " << temp << "*F\n";
    }
    else if(unit == 'C' || unit == 'c') {
        std::cout << "Enter the temp in Farenheit to convert: ";
        std::cin >> temp;

        temp = (temp - 32) / 1.8;
        std::cout << "Temp is: " << temp << "*C\n";
    }
    else {
        std::cout << "Must enter either F, f, C, or c\n";
    }

    std::cout << "-------------------------------------------------------------------------\n";

    return 0;
}