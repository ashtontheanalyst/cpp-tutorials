// Somewhat like an array, it's a grouping of related variables that can be all different data types
// variables within it are called 'members'
#include <iostream>

// We're basically making a data type called students
struct students{
    std::string name;
    double gpa;
    bool enrolled = true; // we can set a default value and then change it if need be
}; // notice it ends with a ;

int main() {

    students student1; // initializes a new struct variable, similar to doing 'int gpa;'

    student1.name = "Forrest Gump"; // we access the members this way to then assign a value
    student1.gpa = 1.34;
    student1.enrolled = false; // see how we can change the default value, poor Forrest

    std::cout << student1.name << " has a gpa of: " << student1.gpa << '\n';

    students student2;
    student2.name = "LT Dan";
    student2.gpa = 2.72;

    std::cout << student2.name << " has a gpa of: " << student2.gpa << '\n';


    return 0;
}