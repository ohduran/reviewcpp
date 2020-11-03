#include <iostream>

int main()
{
    char name[255];

    std::cout << "Enter your name: ";
    std::cin.getline(name, sizeof(name) / sizeof(name[0]));

    std::cout << "You entered " << name << '\n';
    return 0;
}