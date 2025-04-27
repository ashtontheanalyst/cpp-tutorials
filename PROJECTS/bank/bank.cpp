#include <iostream>
#include <iomanip> // There's a function in here that allows us to control how many decimal points for a float
 
// Functions declared to be used later
void showBalance(double balance);
double deposit();
double withdrawl(double balance);

int main() {
    // Initial values
    double balance = 1200.25;
    int choice = 0;

    do {
        // Choice screen
        std::cout << "---------------------\n";
        std::cout << "Enter your choice:\n";
        std::cout << "---------------------\n";
        std::cout << "1. Show Balance\n";
        std::cout << "2. Deposit Money\n";
        std::cout << "3. Withdrawl Money\n";
        std::cout << "4. Exit\n";
        std::cin >> choice;

        std::cin.clear(); // This resets error flags for errors on cin?
        fflush(stdin); // Flushes the new line buffer

        // Options for cin and what to then do
        switch (choice) {
            case 1: showBalance(balance);
                    break;
            case 2: balance += deposit();
                    showBalance(balance);
                    break;
            case 3: balance -= withdrawl(balance);
                    showBalance(balance);
                    break;
            case 4: std::cout << "Thanks for choosing us!\n";
            default: std::cout << "Invalid choice\n";
        }
    } while (choice != 4);

    return 0;
}

// Basic output of a variable with precision
void showBalance(double balance) {   
    std::cout << "Your balance is: $" << std::setprecision(2) << std::fixed << balance << "\n";
    // the stdprecision and fixed allow us to control the decimal points being shown, from iomanip
}

// depositing money with error handling for edge cases
double deposit() {
    double amount = 0;

    std::cout << "Enter amount to be deposited: ";
    std::cin >> amount;

    if (amount > 0) {
        return amount;
    }
    else {
        std::cout << "That's not a valid amount to deposit\n";
        return 0;
    }
}

// withdrawing money also with error handling for edge cases
double withdrawl(double balance) {
    double amount = 0;

    std::cout << "Enter amount to be withdrawn: ";
    std::cin >> amount;

    if (amount > 0 && amount < balance) {
        return amount;
    }
    else {
        std::cout << "That's not a valid amount to deposit\n";
        return 0;
    }
}