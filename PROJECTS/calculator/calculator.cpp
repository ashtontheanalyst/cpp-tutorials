// This is a practice application using some switch case, in and out, etc.
#include <iostream>

int main() {

    char op; // The operator for the calculator +, -, *, /
    double num1;
    double num2;
    double result;

    std::cout << "------------------------- CALCULATOR APP -------------------------\n";

    std::cout << "Enter either +, -, *, or /: ";
    std::cin >> op;

    std::cout << "Enter the first number: ";
    std::cin >> num1;

    std::cout << "Enter the second number: ";
    std::cin >> num2;

    switch(op) {
        case '+':
            result = num1 + num2;
            std::cout << num1 << " " << op << " " << num2 << " equals " << result << std::endl;
            break;
        case '-':
            result = num1 - num2;
            std::cout << num1 << " " << op << " " << num2 << " equals " << result << std::endl;
            break;
        case '*':
            result = num1 * num2;
            std::cout << num1 << " " << op << " " << num2 << " equals " << result << std::endl;
            break;
        case '/':
            result = num1 / num2;
            std::cout << num1 << " " << op << " " << num2 << " equals " << result << std::endl;
            break;
        default:
            std::cout << "Not a valid operation\n";
    }

    std::cout << "------------------------------------------------------------------\n";

    return 0;
}