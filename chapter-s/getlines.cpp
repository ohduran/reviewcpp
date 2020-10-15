#include <iostream>
#include <string>

int main()
{
    std::cout << "Enter your full name: ";
    std::string fullName;
    std::getline(std::cin, fullName);

    std::cout << "Enter your age: ";
    std::string age;
    std::getline(std::cin, age);

    std::cout << "Your name is " << fullName << " and your age is " << age << std::endl;

    return 0;
}