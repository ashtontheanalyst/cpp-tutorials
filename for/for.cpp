#include <iostream>

int main() {

    // Run the code in the block, starting at value 1, until you reach value 3, incrementing 1 each time
    // Basically, run the code block 3 times
    for(int i = 1; i <= 3; i++) {
        std::cout << "Happy Birthday\n";
    }

    for(double j = 1.0; j <= 12.0; j += 0.4) {
        std::cout << j << " ";
    }
    std::cout << "\nCounting Done\n";


    // break and continue -------------------------------------------------------------------------------
    for(int z = 1; z <= 20; z++) {
        if(z == 13) {
            continue; // This skips when z = 13, in this case meaning that it won't print it
        }
        else if(z == 17) {
            break; // break out of the loop early once it hits 17, meaning the last value printed is 16 since 17 won't get printed
        }
        else {
            std::cout << z << " ";
        }
    }
    std::cout << "\nCounting Done... again\n";

    // nested loops -------------------------------------------------------------------------------------
    for(int g = 1; g <= 3; g++) { // This is the row count since we do \n
        for(int s = 0; s <= 5; s++) {
            std::cout << s << " "; // In the row, count off s from 0 through 5
        }
        std::cout << "\n";
    }
    
    std::cout << "\n"; // just to separate the code out, not part of the loop


    // Row and Column maker -------------------------------------------------------------------------------
    int rows;
    int columns;
    char symbol;

    std::cout << "How many rows?: ";
    std::cin >> rows;

    std::cout << "How many columns?: ";
    std::cin >> columns;

    std::cout << "Enter a character of any kind: ";
    std::cin >> symbol;
    
    for(int k = 1; k <= rows; k++) {
        for(int p = 1; p <= columns; p++) {
            std::cout << symbol;
        }
        std::cout << "\n";
    }
    

    return 0;
}