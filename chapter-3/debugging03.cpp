#include <iostream>

int getUserInput()
{
    std::cout << "Enter a number: ";
    int x;
    std::cin >> x;
    return x;
}

int main()
{

    int x = getUserInput();
    std::cout << "You entered " << x;

    return 0;
}