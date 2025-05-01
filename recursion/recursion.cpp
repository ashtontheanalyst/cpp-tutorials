// Recursion is where a function invokes itself from within. Uses less code and is cleaner, 
// good for sorting/searching but uses more memory
#include <iostream>

void walk(int steps);
void walkRecursion(int steps);
int factorial(int num);
int factorialRecursive(int num);

int main() {

    walk(100); // passes 100 steps to the function

    walkRecursion(100); // now using the recursive function

    std::cout << factorial(10) << '\n';

    std::cout << factorialRecursive(8) << '\n';

    return 0;
}

// Really in this case, the iterative function is better but for example we can use recursion
void walk(int steps) {
    // In this case will ITERATE 100 times, this is not recusrion but instead just iteration
    for (int i = 0; i < steps; i++) {
        std::cout << "You took an iterative step!\n";
    }
}

void walkRecursion(int steps) {
    if (steps > 0) {
        std::cout << "You took a recursive step!\n";
        walkRecursion(steps - 1); // knock one off the step count and go through the function again
    }
}


// Factorial is when you multiply the specified number by the one below it, then the one below it, till 1
// so like this, if the starting number is 10 --> 10*9*8*7*6*5*4*3*2*1 = 3628800
int factorial(int num) {
    int result = 1;

    for (int i = 1; i <= num; i++) {
        result = result * i;
    }

    return result;
}

// Here's the recursive approach
int factorialRecursive(int num) {
    if (num > 1) {
        return num * factorialRecursive(num - 1);
    }
    else {
        return 1;
    }

}