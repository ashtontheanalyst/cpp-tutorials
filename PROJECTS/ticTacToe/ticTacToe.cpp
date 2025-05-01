#include <iostream>
#include <ctime> // For seeding the random function

// function declaration
void drawBoard(char *spaces);
void playerMove(char *spaces, char player);
void computerMove(char *spaces, char computer);
bool checkWinner(char *spaces, char player, char computer);
bool checkTie(char *spaces);


int main() {

    char spaces[9] = {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '};
    char player = '%';
    char computer = '@';
    bool running = true;

    drawBoard(spaces);

    while (running) {
        playerMove(spaces, player);
        drawBoard(spaces);
        // remember that checkWinner is a boolean, so basically saying "if true, do this..."
        if (checkWinner(spaces, player, computer)) {
            running = false;
            break;
        }
        // checkTie also returns a boolean
        else if (checkTie(spaces)) {
            running = false;
            break;
        }

        computerMove(spaces, computer);
        drawBoard(spaces);
        if (checkWinner(spaces, player, computer)) {
            running = false;
            break;
        }
        else if (checkTie(spaces)) {
            running = false;
            break;
        }
    }

    return 0;
}

// Remember that passing an array to a function passes a pointer (memory address)
// that's why we have to deref it to get all the values inside
void drawBoard(char *spaces) {
    std::cout << '\n';
    std::cout << "      |      |      \n";
    std::cout << "  " << spaces[0] << "   |  " << spaces[1] << "   |  " << spaces[2] << "   \n";
    std::cout << "______|______|______\n";
    std::cout << "      |      |      \n";
    std::cout << "  " << spaces[3] << "   |  " << spaces[4] << "   |  " << spaces[5] << "   \n";
    std::cout << "______|______|______\n";
    std::cout << "      |      |      \n";
    std::cout << "  " << spaces[6] << "   |  " << spaces[7] << "   |  " << spaces[8] << "   \n";
    std::cout << "      |      |      \n";
    std::cout << '\n';
}

void playerMove(char *spaces, char player) {
    int number; // User will input a number between 1 and 9... a spot on the board

    do {
        std::cout << "Enter a spot to place a marker (1-9): ";
        std::cin >> number;
        number--; // decrement since arrays start at 0

        // if the number is empty, mark it with the player emblem
        if (spaces[number] == ' ') {
            spaces[number] = player;
            break;
        }
    } while (!number > 0 || !number < 8);
}

void computerMove(char *spaces, char computer) {
    int number;
    srand(time(0)); // Initialize the randomness

    while (true) {
        number = rand() % 9; // Picks a random number between 0 and 8

        // if spot is empty, mark for the computer
        if (spaces[number] == ' ') {
            spaces[number] = computer;
            break;
        }
    }
}

bool checkWinner(char *spaces, char player, char computer) {
    
    // first row win? and not just empty spaces
    if (spaces[0] != ' ' && spaces[0] == spaces[1] && spaces[1] == spaces[2]) {
        if (spaces[0] == player) {
            std::cout << "YOU WIN!\n";
        }
        else {
            std::cout << "YOU LOSE!\n";
        }
    }
    // second row win?
    else if (spaces[3] != ' ' && spaces[3] == spaces[4] && spaces[4] == spaces[5]) {
        if (spaces[3] == player) {
            std::cout << "YOU WIN!\n";
        }
        else {
            std::cout << "YOU LOSE!\n";
        }
    }
    // third row win?
    else if (spaces[6] != ' ' && spaces[6] == spaces[7] && spaces[7] == spaces[8]) {
        if (spaces[6] == player) {
            std::cout << "YOU WIN!\n";
        }
        else {
            std::cout << "YOU LOSE!\n";
        }
    }
    // first column win?
    else if (spaces[0] != ' ' && spaces[0] == spaces[3] && spaces[3] == spaces[6]) {
        if (spaces[0] == player) {
            std::cout << "YOU WIN!\n";
        }
        else {
            std::cout << "YOU LOSE!\n";
        }
    }
    // second column win?
    else if (spaces[1] != ' ' && spaces[1] == spaces[4] && spaces[4] == spaces[7]) {
        if (spaces[1] == player) {
            std::cout << "YOU WIN!\n";
        }
        else {
            std::cout << "YOU LOSE!\n";
        }
    }
    // third column win?
    else if (spaces[2] != ' ' && spaces[2] == spaces[5] && spaces[5] == spaces[8]) {
        if (spaces[2] == player) {
            std::cout << "YOU WIN!\n";
        }
        else {
            std::cout << "YOU LOSE!\n";
        }
    }
    // top left to bottom right diagonal win?
    else if (spaces[0] != ' ' && spaces[0] == spaces[4] && spaces[4] == spaces[8]) {
        if (spaces[0] == player) {
            std::cout << "YOU WIN!\n";
        }
        else {
            std::cout << "YOU LOSE!\n";
        }
    }
    // top right to bottom left diagonal win?
    else if (spaces[2] != ' ' && spaces[2] == spaces[4] && spaces[4] == spaces[6]) {
        if (spaces[2] == player) {
            std::cout << "YOU WIN!\n";
        }
        else {
            std::cout << "YOU LOSE!\n";
        }
    }
    else {
        return false;
    }
    
    return true;
}

bool checkTie(char *spaces) {
    
    for (int i = 0; i < 9; i++) {
        if (spaces[i] == ' ') {
            return false; // there's still empty spaces keep playing, no tie yet
        }
    }
    std::cout << "IT'S A DRAW....\n";
    
    return true;
}