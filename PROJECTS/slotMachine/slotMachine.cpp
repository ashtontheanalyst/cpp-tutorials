// Made my own slot machine

#include <iostream>
#include <ctime>

int main() {
    int balance;
    char playing;

    srand(time(NULL)); // set the random fn's seed

    std::cout << "$-$-$-$-$-$-$-$-$-$-$-$-$-$-$-$--- SLOT MACHINE ---$-$-$-$-$-$-$-$-$-$-$-$-$-$-$-$-$\n";
    
    std::cout << "Welcome to the slot machine, each spin is $5\n";
    std::cout << "\nHow much $ are you entering?: ";
    std::cin >> balance;
    std::cout << "Okay your starting balance is: " << balance << "\n\n";

    do {
        balance -= 5;
        int num1 = (rand() % 5) + 1; // random # 1-5
        int num2 = (rand() % 5) + 1;
        int num3 = (rand() % 5) + 1;

        std::cout << "| " << num1 << " | " << num2 << " | " << num3 << " |\n";

        if(num1 == num2 && num2 == num3) {
            std::cout << "You won the grandprize of $1,000,000!!\n";
            balance += 1000000;
            std::cout << "Spin Again? ('y' or 'n'): ";
            std::cin >> playing;
        }
        else {
            std::cout << "Spin Again? ('y' or 'n'): ";
            std::cin >> playing;
        }
    } while (balance > 0 && playing == 'y');

    std::cout << "\nThanks for Playing! You ended with $" << balance << "\n";

    std::cout << "$-$-$-$-$-$-$-$-$-$-$-$-$-$-$-$-$-$-$-$-$-$-$-$-$-$-$-$-$-$-$-$-$-$-$-$-$-$-$-$-$-$-$\n";

    return 0;
}