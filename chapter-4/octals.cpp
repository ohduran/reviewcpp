#include <iostream>

int main(int argc, char const *argv[])
{
    int x = 012;
    std::cout << x; // 10, because 12 octal is 10 decimal

    std::cout << std::endl;
    int y = 0xF;
    std::cout << y; // 15, because F in hexadecimal is 15 in decimal

    std::cout << std::endl;
    return 0;
}
