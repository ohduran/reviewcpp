#include <iostream>

int main()
{
    enum class Color
    {
        color_red,
        color_blue,
    };

    enum class Fruit
    {
        fruit_banana,
        fruit_apple,
    };

    Color color(Color::color_red);
    Fruit fruit(Fruit::fruit_banana);

    // WON't WORK: invalid operands to binary expression ('Color' and 'Fruit')
    // color and fruit aren't evaluated as integers anymore, now that we're using enum class

    // if (color == fruit)
    // {
    //     std::cout << "color and fruit are equal!\n";
    // }
    // else
    // {
    //     std::cout << "color and fruit are NOT equal!\n";
    // }

    if (color == Color::color_red)
    {
        std::cout << "The color is red\n";
    }

    return 0;
}