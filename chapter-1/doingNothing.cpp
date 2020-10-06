#include <iostream>

void doNothing(int&)
{
}

int main()
{
    int x;

    doNothing(x);

    std::cout << x;  // who knows what we'll get

    return 0;
}