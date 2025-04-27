// arrays are a data structure that can hold multiple values and are accessed by an index #
// i.e. like a variable that holds other variables
// ALL MUST BE THE SAME DATA TYPE, like string, int, etc.

#include <iostream>

int main() {
    std::string car = "Chevy";
    // This is declaring an array and then filling it, notice the multiple string enclosed in braces
    std::string cars[] = {"C10", "Corvette", "Blazer", "Camaro"};

    std::cout << car << "\n";
    std::cout << cars << "\n"; // This won't display the cars array, just its memory address
    std::cout << cars[0] << "\n"; // Displays the first value in the array

    std::cout << "\n" << cars[2] << "\n";
    cars[2] = "Tahoe"; // We can change the value in an array like this, has to be a string though
    std::cout << cars[2] << "\n";


    // Another way to do it
    std::string trucks[3]; // If you don't immediately fill the array then you need to say how many value
    // it can hold maximum, in this case 3
    trucks[0] = "F150";
    trucks[1] = "Silverado";
    trucks[2] = "Ram 1500";


    // double array
    double prices[] = {5.00, 7.50, 9.99, 15.00};
    std::cout << "\n" << prices[0] << "\n";
    std::cout << prices[1] << "\n";
    std::cout << prices[2] << "\n";
    std::cout << prices[3] << "\n";

    return 0;
}