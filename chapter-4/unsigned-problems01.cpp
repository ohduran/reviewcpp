#include <iostream>

int main()
{
    unsigned int x = 3;
    unsigned int y = 5;

    std::cout << x - y << "\n"; // will output 4294967294
    return 0;
}