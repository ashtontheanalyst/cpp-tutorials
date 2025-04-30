// INCLUDES INFORMATION ABOUT BASIC MEMORY ADDRESSING ALSO

#include <iostream>

void swap(std::string &x, std::string &y); // pass by ref. swap function

int main() {
    // Memory Address - a location in memory where the data is stored, 0x284... (hexidecimal address)
    // Think of this as the street number to a house
    // The address will likely change each time you run the program
    // It's accessed with the & (address of ____ operator)

    std::string name = "John Doe";
    int age = 92;
    bool student = false;

    std::cout << "The mem address of name is: " << &name << '\n';
    std::cout << "The mem address of age is: " << &age << '\n';
    std::cout << "The mem address of student is: " << &student << '\n';


    // Swapping values -------------------------------------------------------------------------------
    std::string x = "Kool-Aid";
    std::string y = "Water";

    std::cout << "\nBefore Swapping: " << '\n';
    std::cout << "X: " << x << " and " << &x << '\n';
    std::cout << "Y: " << y << " and " << &y << "\n\n";

    swap(x, y);

    std::cout << "After Swapping: " << '\n';
    std::cout << "X: " << x << " and " << &x << '\n';
    std::cout << "Y: " << y << " and " << &y << "\n\n";

    return 0;
}


// Function to swap ---------------------------------------------------------------------------------
// Up to now we've been 'passing by value' or basically making a copy of the aguments passed in
// the original arguments don't get changed or touched.
// 'Passing by reference' means you're passing in the memory address of the original argument(s)
// like below, NOTICE THE &:
void swap(std::string &x, std::string &y) {
    std::string temp;
    temp = x;
    x = y;
    y = temp;
}