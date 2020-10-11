#include <iostream>

int main()
{
    unsigned short x = 65535; // largest 16-bit unsigned value possible (2^16 - 1)
    std::cout << "x was: " << x << "\n";

    x = 65535 + 1;
    std::cout << "x is now " << x << "\n";

    x = 65535 + 2;
    std::cout << "x is now " << x << "\n";

    return 0;
}