// The sizeof function allows us to get the size in bytes of a var, data type, class, etc.

#include <iostream>

int main() {
    // Different data types
    double gpa = 2.5;
    std::string name = "John Doe";
    char grade = 'A';
    bool student = true;
    char grades[] = {'A', 'B', 'C', 'D', 'F'};
    std::string names[] = {"John", "Will", "Douglas", "Antwan"};
    
    // Finding and displaying the size
    std::cout << "gpa is a double and holds " << sizeof(gpa) << " bytes\n";
    std::cout << "name is a string and holds " << sizeof(name) << " bytes\n";
    std::cout << "grade is a char and holds " << sizeof(grade) << " bytes\n";
    std::cout << "student is a boolean and holds " << sizeof(student) << " bytes\n";
    std::cout << "grades is an array of char's and holds " << sizeof(grades) << " bytes\n";
    
    // Take the thing you want the size of, divide out the indiivuals, get the amount in it like '4 ints'
    std::cout << "grades has " << sizeof(grades)/sizeof(char) << " elements\n";
    std::cout << "names has " << sizeof(names)/sizeof(std::string) << " names in it\n\n";

    return 0;
}