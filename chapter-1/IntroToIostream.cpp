#include <iostream>

int main()
{
    int x = { 5 };
    std::cout << "x is equal to: " << x << "\n";

    std::cout << "Enter a number: ";

    int y;

    std::cin >> y;

    std::cout << "You entered " << y << "\n";

    return 0;
}