#include <iostream>

int main()
{
    int x = 5;

    int y = x++; // x is incremented to 6, copy of original x is evaluated to 5, then 5 is assigned to y.

    std::cout << x << ' ' << y << std::endl; // 6 5
    return 0;
}