#include <iostream>

void sort(int array[], int size);

int main() {
    /*
    BUBBLE SORT, starts with the first index and compares it's value to the index to the right, if it
    is larger then index 0 goes to a temp, index 1 goes to index 0s spot, index 0 goes to index 1s spot.
    */

    int array[] = {10,1,17,2,12,3,7,4,6,9};
    int size = sizeof(array)/sizeof(array[0]);

    // Iterate through the unsorted array
    for (int i = 0; i < size; i++) {
        std::cout << array[i] << " ";
    } std::cout << '\n';

    // Sort and display
    sort(array, size);


    // fill function --------------------------------------------------------------------------------
    // Really great for filling in arrays or lists that have a ton of value you don't want to one by one put in
    const int SIZE = 12;
    std::string foods[SIZE]; // array allocated with 15 strings
    
    // (place to start, place to end, what to fill with)
    fill(foods, foods + (SIZE/3), "hotdog"); // first third
    fill(foods + (SIZE/3), foods + (2*SIZE/3), "hamburger"); // second hird...
    fill(foods + (2*SIZE/3), foods + SIZE, "wings");


    for (std::string food : foods) {
        std::cout << food << " ";
    } std::cout << '\n';


    // filling an array with user input -------------------------------------------------------------
    std::string foods1[5]; // max size of this array is 5 strings
    size = sizeof(foods1)/sizeof(foods1[0]); // redeclare size to new value
    std::string temp; // holds the string temp

    for (int i = 0; i < size; i++) {
        std::cout << "Enter a food or press 'q' to quit, #" << i + 1 << "/5: "; 
        std::getline(std::cin, temp);

        if (temp == "q") {
            break;
        }
        else {
            foods1[i] = temp;
        }
    }

    std::cout << "You like these foods:\n";

    // This goes through the loop as long as the value in foods1 isn't empty
    for (int j = 0; !foods1[j].empty(); j++) {
        std::cout << foods1[j] << "\n";
    } std::cout << '\n';


    // 2D Array (multidimensional) ------------------------------------------------------------------
    // [# of rows][# of columns], you only have to initialize the amount of columns at minimum
    // The formatting can be different in terms of indenting but this looks nice
    std::string cars[][3] = {{"Mustang", "Escape", "F150"},
                            {"Camaro", "Equinox", "Silverado"},
                            {"Hellcat", "Durango", "1500"}};

    int rows = sizeof(cars)/sizeof(cars[0]);
    int columns = sizeof(cars[0])/sizeof(cars[0][0]);

    for (int i = 0; i < rows; i++) {
        std::cout << "Row: " << i + 1 << '\n';
        for (int j = 0; j < columns; j++) {
            std::cout << cars[i][j] << " ";
        } std::cout << '\n';
    }

    return 0;
}

void sort(int array[], int size) {

    int temp;
    // we do -1 since we're not concerned about the last value, it'll be the largest
    // this will sort the list into accending order
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            // flip this to less than if you want decending
            // compares the value on the left 'j' to the value on the right 'j + 1'
            if (array[j] > array[j + 1]) {
                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }

            // Walks us through each movement to see what's happening
            for (int i = 0; i < size; i++) {
                std::cout << array[i] << " ";
            } std::cout << '\n';
        }
    }
    
    // Sorted
    std::cout << '\n' << "Bubble Sorted Array: ";
    for (int i = 0; i < size; i++) {
        std::cout << array[i] << " ";
    } std::cout << '\n';
}