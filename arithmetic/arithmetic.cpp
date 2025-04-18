#include <iostream>
#include <cmath> // This package includes a ton of useful math functions, see line 52 for more

int main() {
    int students = 20;

    students = students + 1; // addtion
    students++; // quicker

    students--; // subtraction

    students = students * 2; // multiply
    students *= 2;

    students = students / 2; // divide
    students /= 2;

    int remainder = students % 2; // modulus, remainder

    double classes = 7; // to get a decimal, one of the numbers must be a double or float
    classes /= 2; // comes out to 3.5
    students /= 2; // should be 10.5 but will only be 10 since it's int on int division

    std::cout << students << "\n";
    std::cout << remainder << "\n";
    std::cout << classes << "\n";
    std::cout << students << "\n";


    // Type conversion (casting) ----------------------------------------------------------------------------
    // Changing a variable from one type to another, like int to float
    
    int x = 3.14; // This will only store the 3
    double y = (int) 3.14; // This stores an int of 3 in the double

    std::cout << x << " and " << y << "\n";

    char a = 100; // Implicitly this is stores as the ASCII 100 which is the letter 'd', implicit casting
    std::cout << a << "\n";


    // Integer division (type conversion ex) ---------------------------------------------------------------
    int correct = 9;
    int questions = 10;
    double score = (correct/questions) * 100; // This equates to 0 
    std::cout << score << " isn't correct...\n";

    double realScore = correct / (double)questions * 100; // We change one of them to a double to get the real answer
    std::cout << realScore << " is correct!\n";


    // Math functions -------------------------------------------------------------------------------------
    double x1 = 3;
    double y1 = 4;
    double z1;

    z1 = std::max(x1, y1); // This gets the max between two
    z1 = std::min(x1, y1); // This gets the min between two

    // These use the cmath package
    z1 = pow(2, 3); // Raise 2 to the power of 3
    z1 = sqrt(9); // square root
    z1 = abs(-19384); // abs value
    z1 = round(7.28381); // normal rounding
    z1 = ceil(192.11); // always round up
    z1 = floor(1.99999); // always round down

    return 0;
}