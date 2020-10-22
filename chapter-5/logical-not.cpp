#include <iostream>

int main()
{
    int x = 5;
    int y = 7;

    if (! (x > y))  // CAREFUL, logical NOT has a very high level of precedence
    {
        std::cout << "x is not greater than y\n";
    }
    else
    {
        std::cout << "x is greater than y\n";
    }

    return 0;
}