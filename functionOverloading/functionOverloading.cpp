#include <iostream>

// We can make multiple versions of the function based on what parameters get passed to it
// and if then we want there to be different behavior (function overloading)
void bakePizza(); // if no argument is passed
void bakePizza(std::string topping1); // if a string is passed
void bakePizza(std::string topping1, std::string topping2); // two string arguments


// Function Template
// Instead of having to write a bunch of different functions like the ones above, we can just simplify
// it and say that the data type will be 'T', then anything passed in will match the output
// So, if you pass in max(double, double) it''l return a double, same with ints, chars, etc.
template <typename T> // arguments have to be the same data type
T max(T x, T y) {
    if (x > y) { 
        return x;
    }
    else {
        return y;
    }
}

// Now we can pass in two different types and return whichever value is correct but of that type
// since we set the return to auto
template <typename T, typename U>
auto max(T x, U y) {
    if (x > y) { 
        return x;
    }
    else {
        return y;
    }
}


int main() {
    std::string topping = "sausage";
    std::string anotherTopping = "hotdog";

    bakePizza();
    bakePizza(topping);
    bakePizza(topping, anotherTopping);

    // template function
    std::cout << max(1, 2) << '\n';
    std::cout << max('A', 'Z') << '\n';
    std::cout << max(12.2, 120349.1) << '\n';

    return 0;
}

void bakePizza() {
    std::cout << "Here is your pizza\n";
}

void bakePizza(std::string topping1) {
    std::cout << "You ordered a " << topping1 << " pizza\n";
}

void bakePizza(std::string topping1, std::string topping2) {
    std::cout << "You really ordered a " << topping1 << " and " << topping2 << " pizza?\n";
}