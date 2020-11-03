#include <iostream>

int main()
{
    char myString[] = {"string"};

    const int length = static_cast<int>(sizeof(myString) / sizeof(myString[0]));

    std::cout << myString << " has " << length << " characters\n";

    for(int index = 0; index < length; index++)
    {
        std::cout << static_cast<int>(myString[index]) << ' ';
    }
    std::cout << '\n';
    return 0;
}