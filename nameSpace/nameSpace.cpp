#include <iostream>
using namespace std; // This allows us to not have to put std in front of everything like std::string, etc.

// These namespaces outside of main allow me to resuse the var name x
namespace first {
    char x = 'T';
}

namespace second {
    string x = "Interesting isn't it";
}

int main() {

    int x = 0;
    // we can't do another declaration of x like int x = 1; instead do a namespace if needed

    cout << x << endl; // x in main, it's an int
    cout << first::x << endl; // x in first, it's a char
    cout << second::x << endl; // x in second, it's a whole string

    // using namespace second; // From now on, x will now be as what's defined in the second namespace

    return 0;
}