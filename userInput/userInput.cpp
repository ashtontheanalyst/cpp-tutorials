#include <iostream>

int main() {
    // declare out var's
    std::string name;
    int age;
    std::string hobby;

    std::cout << "What's your name?: ";
    // std::cin >> name; // similar to std::cout but we do 'character in' and switch the flow of data to >>
    std::getline(std::cin, name); // this is so we take in everything including spaces
    std::cout << "Hello " << name << "\n";


    std::cout << "How old are you?: ";
    std::cin >> age; // input for an int, same process
    std::cout << "You (" << name << ") are " << age << " year(s) old" << std::endl;


    // If you put getline() after a cin, you have to clear the buffer that is holding a \n, here's how:
    // you add the >> std::ws, it extracts the whitespace for getline
    std::cout << "What's your favorite hobby " << name << " ?: ";
    std::getline(std::cin >> std::ws, hobby);
    std::cout << hobby << " is a great hobby!\n";

    return 0;
}