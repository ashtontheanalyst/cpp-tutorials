// Dynamic memory is allocated after the program has been compiled and is runnign. It's useful
// when you don't know how much memory you'll need, maybe because of something like user input.
// We use the 'new' operator to denote this
// The Stack is static memory, the heap is dyanmic memory

#include <iostream>

int main() {

    int* pNum = nullptr; // Create an int pointer with no memory address as of now
    
    pNum = new int; // Assigns a new, integer sized, memory address to the pointer. No deref value yet

    *pNum = 21; // Now the pointer deref value has been assigned as 21

    if (pNum == nullptr) {
        std::cout << "Address did not get assigned\n";
    }
    else {
        std::cout << "Address: " << pNum << " | Deref. Value at Address: " << *pNum << '\n';
    }

    delete pNum; // Frees up the memory once you're done with it, this should be done each time 'new' is used


    // Using 'new' for array ---------------------------------------------------------------------------
    char* pGrades = nullptr; // First mem address of the soon to be array, it's a char pointer
    
    // User input to determine how many values are in the array
    int size;
    std::cout << "How many grades to enter in: ";
    std::cin >> size;

    // Create the array based off the pGrades pointer and inputted size
    pGrades = new char[size];

    for (int i = 0; i < size; i++) {
        std::cout << "Enter grade #" << i + 1 << ": ";
        std::cin >> pGrades[i];
    } std::cout << '\n';

    for (int i = 0; i < size; i++) {
        std::cout << pGrades[i] << " ";
    } std::cout << '\n';

    delete[] pGrades; // We add the brackets to delete since it's a pointer

    return 0;
}