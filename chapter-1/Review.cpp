#include <iostream>

int main()
{
    int firstInteger;
    std::cout << "Enter an integer: ";
    std::cin >> firstInteger;

    int secondInteger;
    std::cout << "Enter another integer: ";
    std::cin >> secondInteger;

    std::cout << firstInteger << " + " << secondInteger << " is " << firstInteger + secondInteger << "\n";
    std::cout << firstInteger << " - " << secondInteger << " is " << firstInteger - secondInteger << "\n";
    
    return 0;

}