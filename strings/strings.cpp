// Useful functions with strings. there's a lot more online in the cpp string class
#include <iostream>

int main() {

    std::string name;

    std::cout << "Enter your name: ";
    std::getline(std::cin, name);

    // .length() finds the length of the string
    if(name.length() > 12 && !name.empty()) {
        std::cout << "Your name can't be over 12 char's\n";
    }
    else if(!name.empty()) {
        std::cout << "Welcome " << name << "\n";
    }

    // .empty() returns a boolean on if the string is empty or not
    if(name.empty()) {
        std::cout << "You have to enter a name\n";
    }
    else {
        std::cout << "Hello " << name << "\n";
    }

    // name.clear(); // clears the name string

    name.append("@gmail.com");
    std::cout << name << " is now your email\n";

    std::cout << name.at(0) << std::endl; // pulls the char at a certain position in the string

    name.insert(0, "$"); // places a char at a certain position, DOES NOT REPLACE
    std::cout << name << std::endl;

    std::cout << name.find(' ') << std::endl; // find locates the first index position of a char, in this case a space

    name.erase(0, 2); // erase from the begging index to the ending i.e. 0 to 2
    std::cout << name << std::endl;

    return 0;
}