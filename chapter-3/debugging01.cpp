#include <iostream>

int getValue()
{
    std::cerr << "getValue() called\n";
    return 4;
}

int main()
{
    std::cerr << "main() called\n";
    std::cout<< getValue();
    std::cout << "\n";

    return 0;
}