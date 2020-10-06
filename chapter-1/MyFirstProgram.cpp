#include <iostream>

int main()
{
    std::cout << "Enter an integer: ";

    int enteredNumber;
    std::cin >> enteredNumber;

    std::cout << "Double " << enteredNumber << " is: " << 2 * enteredNumber<< "\n";
    std::cout << "Triple " << enteredNumber << " is: " << 3 * enteredNumber<< "\n";

    return 0;
}