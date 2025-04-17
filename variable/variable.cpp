#include <iostream>

int main() {
    int x; // var declaration
    x = 5; // var assignment

    std::cout << x << std::endl;

    // Different data types for variables, see C repo for more
    float gpa = 3.7856; // floats store around 7 digits and can have a decimal
    double pi = 3.1515927943597; // doubles can do the same as floats but with about 15 decimal digits

    char grade = 'A'; // stores a single char

    std::cout << "Your gpa is " << gpa << " which is a " << grade << std::endl;

    bool student = true; // true or false

    return 0;
}