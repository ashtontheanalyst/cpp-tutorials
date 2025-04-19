#include <iostream>

int main() {

    std::string name;

    // This will continually check to see if someone entered their name,
    // If the string remains empty, it will keep prompting for a name in the terminal
    while(name.empty()) {
        std::cout << "Enter your name: ";
        std::getline(std::cin, name);
    }

    std::cout << "Hello " << name << std::endl;


    // do while loop ------------------------------------------------------------------------------------
    // for when you need to run the body of a while loop once to start and then go through it if need be again and again
    int number;

    // This will run the code a first time, then if conditions not met, runs like a normal while loop
    do {
        std::cout << "Enter a positive number: ";
        std::cin >> number;
    } while(number < 0);
    // An idea, this would be useful for a game. Playing while keystroke doe not equal 'q' or else quit

    std::cout << "The number is: " << number << std::endl;

    return 0;
}