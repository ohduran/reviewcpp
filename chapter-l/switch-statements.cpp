#include <iostream>

enum Color
{
    black,
    white,
    red,
    green,
    blue,
};

void printColor(Color color)
{
    switch(color)
    {
        case Color::black:
            std::cout << "Black";
            break;
        case Color::white:
            std::cout << "White";
            break;
        case Color::red:
            std::cout << "Red";
            break;
        case Color::green:
            std::cout << "Green";
            break;
        case Color::blue:
            std::cout << "Blue";
            break;
        default:
            std::cout << "Unknown";
            break;
    }
}

int main()
{
    printColor(Color::green);
    return 0;
}