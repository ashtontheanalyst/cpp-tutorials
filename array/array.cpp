// arrays are a data structure that can hold multiple values and are accessed by an index #
// i.e. like a variable that holds other variables
// ALL MUST BE THE SAME DATA TYPE, like string, int, etc.

#include <iostream>

double getTotal(double prices[], int size);
int searchArray(int nums[], int size, int element);
int searchStringArray(std::string array[], int size, std::string element);

int main() {
    std::string car = "Chevy";
    // This is declaring an array and then filling it, notice the multiple string enclosed in braces
    std::string cars[] = {"C10", "Corvette", "Blazer", "Camaro"};

    std::cout << car << "\n";
    std::cout << cars << "\n"; // This won't display the cars array, just its memory address
    std::cout << cars[0] << "\n"; // Displays the first value in the array

    std::cout << "\n" << cars[2] << "\n";
    cars[2] = "Tahoe"; // We can change the value in an array like this, has to be a string though
    std::cout << cars[2] << "\n";


    // Another way to do it
    std::string trucks[3]; // If you don't immediately fill the array then you need to say how many value
    // it can hold maximum, in this case 3
    trucks[0] = "F150";
    trucks[1] = "Silverado";
    trucks[2] = "Ram 1500";


    // double array
    double numbers[] = {5.00, 7.50, 9.99, 15.00};
    std::cout << "\n" << numbers[0] << "\n";
    std::cout << numbers[1] << "\n";
    std::cout << numbers[2] << "\n";
    std::cout << numbers[3] << "\n\n";


    // ARRAY ITERATION ---------------------------------------------------------------------------
    std::string students[] = {"Spongebob", "Patrick", "Sandy"};

    // Could have done i < 3 but I wanted it to be fancier
    // Prints out each item in the array
    for (int i = 0; i < sizeof(students)/sizeof(std::string); i++) {
        std::cout << students[i] << "\n";
    }

    // Foreach loop, less flexible but easier, literally iterates through everything in the array
    for (std::string student : students) {
        std::cout << student << '\n';
    }


    // Passing array to a function ---------------------------------------------------------------
    // When an array is passed into a function, what's returned is the memory address of the start
    // of the array, not the array itself
    
    double prices[] = {14.99, 7.99, 8.50, 12.40, 19.99};
    int size = sizeof(prices)/sizeof(prices[0]);
    
    double total = getTotal(prices, size); // When passing an array to a function, it's just the name no []s

    std::cout << '\n' << "Total money in the price array is: $" << total << '\n';


    // Searching an array for numbers ------------------------------------------------------------
    int nums[] = {1,2,3,4,5,6,7,8,9,10};
    int sizeNums = sizeof(nums)/sizeof(nums[0]);
    int index;
    int myGuess;

    std::cout << "\nEnter number to search for: ";
    std::cin >> myGuess;

    index = searchArray(nums, sizeNums, myGuess);

    if (index != -1) {
        std::cout << "The index of that number is: " << index << '\n';
    }
    else {
        std::cout << "Value not found in array.\n";
    }
    std::cin.ignore(); // Clears the buffer


    // Searching an array of strings -------------------------------------------------------------
    std::string foods[] = {"hotdog", "burger", "cole slaw", "bun", "ketchup", "mustard"};
    size = sizeof(foods)/sizeof(foods[0]); // Reset size
    index = 0; // Reset index
    std::string myFood;

    std::cout << "Enter a food to search for: ";
    std::getline(std::cin, myFood);

    index = searchStringArray(foods, size, myFood);

    if (index != -1) {
        std::cout << "The index of that food is: " << index << '\n';
    }
    else {
        std::cout << "Food not found in the array.\n";
    }

    return 0;
}

double getTotal(double prices[], int size) {
    double total = 0;

    // We can't do sizeof(prices)/sizeof(price[0]) because a passed array returns a pointer
    // Instead we calculate size of the array in the main function and pass that int in
    for (int i = 0; i < size; i++) {
        total += prices[i];
    }

    return total;
}

// LINEAR SEARCH ------------------------------------------------------
// Function returns the index of the number we want to find in the array, checks every value till
// the specific one is found
int searchArray(int nums[], int size, int element) {
    
    for (int i = 0; i < size; i++) {
        if (nums[i] == element) {
            return i;
        }
    }
    
    return -1; // this means that the value wasn't found
}

// Same as above but for strings
int searchStringArray(std::string array[], int size, std::string element) {

    for (int i = 0; i < size; i++) {
        if (array[i] == element) {
            return i;
        }
    }

    return -1;
}