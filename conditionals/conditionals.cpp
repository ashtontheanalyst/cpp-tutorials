#include <iostream>

int main() {

    // Basic if statement logic
    int age;

    std::cout << "Enter your age: ";
    std::cin >> age;

    if(age > 21 && age < 100) {
        std::cout << "You can buy beer\n";
    }
    else if(age == 21) {
        std::cout << "Congrats, is this your first beer?\n";
    }
    else if(age > 100) {
        std::cout << "Are you an alcoholic zombie?\n";
    }
    else {
        std::cout << "You cannot buy beer, tough\n";
    }


    // Switches ------------------------------------------------------------------------------------------
    // This is another way to rep. an if statement

    int month;
    std::cout << "Enter the month (1-12): ";
    std::cin >> month;

    // The case value to check is month, i.e. if month equals blank, do this..
    switch(month) {
        case 1:
            std::cout << "Happy New Year's, it's January\n";
            break;
        case 7:
            std::cout << "Happy Fourth of July\n";
            break;
        case 10:
            std::cout << "It's Halloween!\n";
            break;
        // Etc. etc. etc. for more cases
        default:
            std::cout << "I don't have anything to say about that month...\n";
            break;
    }


    // Ternary operator -----------------------------------------------------------------------------------
    // It's the ?, a shortened way of stating an if statement
    // Format is this --> condition ? expression 1 : expression 2;

    int grade = 50;
    grade >= 60 ? std::cout << "You passed!!\n" : std::cout << "You failed...\n";

    int letterGrade = 'F';
    letterGrade == 'A' ? std::cout << "You got a perfect grade wow..!\n" : std::cout << "Better luck next time\n";


    // Logical Operators ----------------------------------------------------------------------------------
    // This is your && and, || or, and ! not
    unsigned int temp = -40;
    bool sunny = false;

    if(temp < 80 && temp > 50) {
        std::cout << "The weather is perfect\n";
    }
    else if(temp > 120 || temp < -30) {
        std::cout << "You're lying. Are you on Earth with that temp?\n";
    }
    else {
        std::cout << "Not the best weather but I'll take it\n";
    }

    if(!sunny) {
        std::cout << "Where'd the sun go?\n";
    }

    return 0;
}