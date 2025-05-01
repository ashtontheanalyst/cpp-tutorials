#include <iostream>

int main() {
    // Pointers - variable that stores the memory address of ANOTHER variable
    // Sometimes it's easier to say where something is instead of WHAT it is
    // Remember, & is the address of operator
    // * is the dereference operator

    std::string name = "John Doe";

    // This is a pointer named pName, the * dereference denotes it's a pointer
    // &name is the memory address of the name variable
    std::string *pName = &name;

    std::cout << "name variable value: " << name << '\n';
    std::cout << "name variable address: " << &name << '\n';
    std::cout << "pName pointer value: " << pName << '\n'; // shows the memory address of name
    std::cout << "pName pointer dereferenced value: " << *pName << '\n'; // shows the value stored at the name address


    // Integer Pointer -------------------------------------------------------------------------------
    int age = 20;
    int *pAge = &age; // pAge integer pointer to age

    
    // Array pointer kinda ---------------------------------------------------------------------------
    std::string freePizzas[5] {"sausage", "pepperoni", "cheese", "BBQ", "sicilian"};
    std::cout << "Arrays are there own memory address to the first value: " << freePizzas << '\n';
    // since it's already a mem address, we can just do this for the pointer:
    std::string *pFreePizzas = freePizzas;
    std::cout << pFreePizzas << " is pFreePizzas value, the first mem address of freePizzas array\n";
    std::cout << "This is the deref value of pFreePizzas: '" << *pFreePizzas << "', notice it's the first array value\n";

    return 0;
}