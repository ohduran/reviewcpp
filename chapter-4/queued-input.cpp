#include <iostream>

int main()
{
    std::cout << "Input a keyboard character: ";
    char ch;

    std::cin >> ch;

    std::cout << ch << " has ASCII code " << static_cast<int>(ch) << "\n";

    std::cin >> ch;
    std::cout << ch << " has ASCII code " << static_cast<int>(ch) << "\n";

    return 0;
}