#include <iostream>

int main()
{
    typedef long miles_t;
    typedef long speed_t;

    miles_t distance = 5;
    speed_t mhz = 3200;

    distance = mhz; // this is valid because miles and speed are really longs.

    return 0;
}