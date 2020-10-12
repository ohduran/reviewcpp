/*
Write a short program to simulate
a ball being dropped off of a tower.

To start, the user should be asked
for the height of the tower
in meters.

Assume normal gravity, and no
initial velocity.

Use a function to calculate the
height of the ball after x seconds.

d = g * seconds ^2 / 2
*/

#include "constants.h"
#include <iostream>

int enterHeight()
{
    std::cout << "Enter the height of the tower in meters:";
    int height;
    std::cin >> height;
    return height;
}

void printBallPosition(int height, int second)
{
    double current_height = (height - constants::gravity / 2 * second * second);
    if (current_height > 0)
        std::cout << "At " << second << " seconds, the ball is at height " << current_height << " meters" << std::endl;
    else
    {
        std::cout << "At " << second << " seconds, the ball is on the ground." << std::endl;
    }
}

int main()
{
    const int initial_height = enterHeight();

    printBallPosition(initial_height, 0);
    printBallPosition(initial_height, 1);
    printBallPosition(initial_height, 2);
    printBallPosition(initial_height, 3);
    printBallPosition(initial_height, 4);
    printBallPosition(initial_height, 5);
}