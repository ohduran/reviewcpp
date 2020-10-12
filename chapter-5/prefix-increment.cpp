#include <iostream>

int main()
{
    int x = 5;
    int y = ++x;  // x is incremented to 6, then 6 is asigned to y.

    std::cout << x << ' ' << y << std::endl;
    return 0;
}