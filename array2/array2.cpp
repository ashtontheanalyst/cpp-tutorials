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


    // fill function -----------------------------------------------------------------------------
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