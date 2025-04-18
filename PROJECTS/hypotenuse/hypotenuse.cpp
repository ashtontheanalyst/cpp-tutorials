#include <iostream>
#include <cmath>

int main() {

    double a;
    double b;
    double hypo;

    std::cout << "Enter the first side of the triangle: ";
    std::cin >> a;

    std::cout << "Now the second side: ";
    std::cin >> b;

    hypo = sqrt(pow(a, 2) + pow(b, 2));
    std::cout << "The hypotenuse is " << hypo << " cm\n";

    return 0;
}