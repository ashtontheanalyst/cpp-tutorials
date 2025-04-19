#include <iostream>
#include <ctime>

int main() {

    srand(time(NULL)); // random number function, common practice is to put time(NULL) as the seed

    int num1 = (rand() % 6) + 1; // The %6 gives us a number ranging from 0 to 5, add one from 1 to 6 like dice
    int num2 = (rand() % 6) + 1; //'Roll three dice, random outcome'
    int num3 = (rand() % 6) + 1;

    std::cout << num1 << "\n";
    std::cout << num2 << "\n";
    std::cout << num3 << "\n";


    // Linking random num to a switch/case ---------------------------------------------------------------
    int randomNum = (rand() % 5) + 1; // random num between 1 and 5

    switch(randomNum) {
        case 1: 
            std::cout << "You win a sticker\n";
            break;
        case 2:
            std::cout << "You win a t-shirt\n";
            break;
        case 3:
            std::cout << "You win a free lunch\n";
            break;
        case 4:
            std::cout << "You win a gift card\n";
            break;
        case 5:
            std::cout << "You win an all inclusive vacation\n";
            break;
    }

    return 0;
}