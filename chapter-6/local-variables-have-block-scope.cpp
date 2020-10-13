#include <iostream>

int max(int x, int y)
{
    int max= (x > y) ? x : y;

    return max;
}

int main()
{
    // AUTOMATIC STORAGE DURATION
    int i = 5;  // i created and initialized here
    std::cout << max(3, 4) << '\n';
    return 0;
}  // i destroyed here