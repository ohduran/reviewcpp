#include <iostream>

int main()
{
    float *ptr = 0;

    if (ptr)
    {
        std::cout << "ptr is pointing to a float value";
    }
    else
    {
        std::cout << "ptr is a null pointer";
    }

    return 0;
}