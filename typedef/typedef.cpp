#include <iostream>
#include <vector>

// typedef allows us to turn a really long data type name into a small one such as pairlist
// the _t at the end is good naming convention, tells people it's a type we made
typedef std::vector<std::pair<std::string, int>> pairlist_t;

typedef std::string text_t; // We turned strings into the same thing but called words

// Another way to do this is with 'using' instead of typedef
using number_t = int; // an int is now declared as number_t

int main() {

    pairlist_t pairlist;
    
    // Now to declare a string you ave to use 'words'
    text_t something = "Something cool and fun";
    std::cout << something << std::endl;

    number_t age;
    age = 20;
    std::cout << age << std::endl;

    return 0;
}