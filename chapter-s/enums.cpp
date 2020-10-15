#include <iostream>

int main()
{
    enum Color
    {
        COLOR_BLACK,
        COLOR_RED,
        COLOR_BLUE,
        COLOR_GREEN,
        COLOR_WHITE,
        COLOR_CYAN,
        COLOR_YELLOW,
        COLOR_MAGENTA,
    };

    Color paint(COLOR_WHITE);

    std::cout << paint << std::endl;
    return 0;
}