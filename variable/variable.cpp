#include <iostream>

void favColor(std::string favoriteColor);

// This is a global variable, it can be used anywhere in the file, any function
// Try to avoid using global var.'s since they're not as secure and cause confusion in large programs
std::string color = "dark red";

int main() {
    int x; // var declaration
    x = 5; // var assignment

    std::cout << x << std::endl;

    // Different data types for variables, see C repo for more
    float gpa = 3.7856; // floats store around 7 digits and can have a decimal
    double pi = 3.1515927943597; // doubles can do the same as floats but with about 15 decimal digits

    char grade = 'A'; // stores a single char
    std::string name = "Ashton"; // A string
    std::string address = "111 East Main Not Real St. Florida, TX";
    
    bool student = true; // true or false
    
    std::cout << name << "'s gpa is " << gpa << " which is a " << grade << std::endl;

    // CONSTANTS---------------------------------------------------------------------------------------
    const double PI = 3.14159; // not this var can't be changed
    double radius = 10;
    const double CIRCUM = 2 * pi * radius; // keeps this equation constant

    std::cout << CIRCUM << " cm\n";


    // GLOBALS ----------------------------------------------------------------------------------------
    std::cout << color << " is my favorite color\n";
    favColor(color);

    return 0;
}

void favColor(std::string favoriteColor) {
    std::cout << "Again, " << color << " is my favorite color!\n";
}
