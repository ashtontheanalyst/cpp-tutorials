#include <iostream>

// We can make multiple versions of the function based on what parameters get passed to it
// and if then we want there to be different behavior (function overloading)
void bakePizza(); // if no argument is passed
void bakePizza(std::string topping1); // if a string is passed
void bakePizza(std::string topping1, std::string topping2); // two string arguments

int main() {
    std::string topping = "sausage";
    std::string anotherTopping = "hotdog";

    bakePizza();
    bakePizza(topping);
    bakePizza(topping, anotherTopping);

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