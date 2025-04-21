#include <iostream>

// If you're going to put a function with body after the main fn. you have to at least declare it above main
void abc();
double square(double length);
double cube(double length);
std::string concatStrings(std::string string1, std::string string2);

// void is not going to "return" anything, it just runs the block
// We pass in the parameter 'name' which in this case we can change to whatever we like
void happyBirthday(std::string birthdayBoy, int birthAge) {
    std::cout << "Happy birthday to you!\n";
    std::cout << "Happy birthday to YOU!\n";
    std::cout << "Happy birthday dear " << birthdayBoy << "!\n";
    std::cout << "Happy birthday to youuuuuu...\n";

    std::cout << "You are now " << birthAge << " years old\n\n";
}


int main() {
    std::string name = "John";
    int age = 20;

    //var.'s for string function
    std::string firstName = "James";
    std::string lastName = "Nolan";
    
    double length = 5.0;
    double area = square(length);
    std::cout << "The area of the square is " << area << " in2\n";
    
    double volume = cube(length);
    std::cout << "The volume is " << area << " in3\n\n";

    // String concat function, combines the names
    std::string fullName = concatStrings(firstName, lastName);
    std::cout << firstName << "'s full name is: " << fullName << "\n\n";

    happyBirthday(name, age); // Calling the function in main, aka using it
    // We're also passing in an argument, or something to throw to the function. in this case the string and int
    abc();

    return 0;
}


// Now we put the body of it under main, it was defined earlier
void abc() {
    std::cout << "These are the abc's\n";
    std::cout << "A, B, C, D, E, .... I forgot\n\n";
}


// Using return in a function
double square(double length) {
    return length * length;
}

double cube(double length) {
    return length * length * length;
}


// Function using strings as input param.'s and one string return
std::string concatStrings(std::string string1, std::string string2) {
    return string1 + " " + string2; // combines the names into a full name
}